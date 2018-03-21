//
// Created by Jasson Rodríguez Méndez on 11/3/18.
//

#include "bigarray.h"
#include "unistd.h"
#include "stdbool.h"


bigarray::bigarray(std::string path, std::string name) {
    this->path = path + name;
    for(int i = 0; i < buffer_size; i++){
        loaded[i] = new page;
        loaded[i]->pageNum = -1;
    }
}

bigarray::bigarray(std::string fullpath) {
    this->path = fullpath;
    for(int i = 0; i < buffer_size; i++){
        loaded[i] = new page;
        loaded[i]->pageNum = -1;
    }
}

void bigarray::savePage(int beg,page *page1) {

    std::fstream file(path, std::ios::binary | std::ios::out| std::ios::in);


    if(file.is_open()){

        file.seekp(beg, std::ios::beg);//tengo que revisar si el seek funciona con bytes
        int bytes = sizeof(int);

        for (int i = 0; i < this->pagesize; i++){

            file.write(reinterpret_cast<char *>(&((page1->data)[i])), bytes);

        }
        file.close();

    }else{
        std::cout<<"Error al abrir el archivo"<<std::endl;
    }

}

void bigarray::loadPage(int beg, page *page1){
    std::ifstream file(path, std::ios::binary);

    if(file.is_open()){


        file.seekg(beg, std::ios::beg);//tengo que revisar si el seek funciona con bytes

        int bytes = sizeof(int);

        for (int i = 0; i < this->pagesize; i++){

            file.read(reinterpret_cast<char *>(&(page1->data)[i]), bytes);
        }
        file.close();

    }else{
        std::cout<<"Error al abrir el archivo"<<std::endl;
    }
}

int& bigarray::operator[](int index) {
    int current = index / pagesize;
    for(int i = 0; i < buffer_size; i++) {
        if(loaded[i]->pageNum == -1){
            loaded[i]->pageNum = current;
            loadPage(current * pagesize * 4, loaded[i]);
            page *loadedPage = loaded[i];
            for(int s = i; s > 0; s--){
                loaded[s] = loaded[s-1];
            }
            loaded[0] = loadedPage;
            return loadedPage->data[index - current * pagesize];
        } else if (loaded[i]->pageNum == current) {
            page *used = loaded[i];
            for (int s = i; s > 0; s--) {
                loaded[s] = loaded[s - 1];
            }
            loaded[0] = used;
            return used->data[index - current * pagesize];
        }
    }
    page *replaced = loaded[buffer_size - 1];
    savePage(replaced->pageNum * pagesize * 4, replaced);
    for(int s = buffer_size - 1; s > 0; s--){
        loaded[s] = loaded[s-1];
    }
    loaded[0] = replaced;
    loaded[0]->pageNum = current;
    loadPage(current * pagesize * 4, loaded[0]);
    return loaded[0]->data[index - current * pagesize];
}

void bigarray::save() {
    for(int i = 0; i < buffer_size; i++){
        savePage(loaded[i]->pageNum * pagesize * 4, loaded[i]);
    }
}
