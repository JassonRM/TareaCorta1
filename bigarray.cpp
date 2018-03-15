//
// Created by Jasson Rodríguez Méndez on 11/3/18.
//

#include "bigarray.h"

void bigarray::savePage(int beg,page *page1) {

    std::string path = "../IntGenerator/aBigArray.bin";
    std::ofstream file(path, std::ios::binary);


    if(file.is_open()){

        file.seekp(beg);//tengo que revisar si el seek funciona con bytes
        int bytes = sizeof(int);

        for (int i = 0; i < this->pagesize; i++){

            file.write(reinterpret_cast<char *>(&(page1->data)[i]), bytes);

        }
        file.close();

    }else{
        std::cout<<"Error al abrir el archivo"<<std::endl;
    }

}

void bigarray::loadPage(int beg, page *page1){

    std::string path = "../IntGenerator/aBigArray.bin";
    std::ifstream file(path, std::ios::binary);

    if(file.is_open()){

        file.seekg(beg);//tengo que revisar si el seek funciona con bytes
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
    for(int i = 0; i < buffer_size; i++){
        if(loaded[i]->pageNum == current){
            page *used = loaded[0];
            loaded[0] = loaded[i];
            loaded[i] = used;
            return used->data[index - current * pagesize];
        }else{
            loaded[buffer_size - 1]->pageNum = current;
            loadPage(current * pagesize, loaded[buffer_size - 1]);
        }
    }
}

















