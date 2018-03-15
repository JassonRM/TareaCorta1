//
// Created by Jasson Rodríguez Méndez on 11/3/18.
//

#include "bigarray.h"
/**
 * Escribe una página específica a disco.
 * @param beg valor del byte a partir del cual escribir
 * @param page página que se desea escirbir
 */
void bigarray::savePage(int beg,page page1) {

    std::string path = "../IntGenerator/aBigArray.bin";
    std::ofstream file(path, std::ios::binary);


    if(file.is_open()){

        file.seekp(beg);//tengo que revisar si el seek funciona con bytes
        int bytes = sizeof(int);

        for (int i = 0; i < this->pagesize; i++){

            file.write(reinterpret_cast<char *>(&(page1.data)[i]), bytes);

        }
        file.close();

    }else{
        std::cout<<"Error al abrir el archivo"<<std::endl;
    }

}
/**
 * Lee una página específica a disco.
 * @param beg valor del byte a partir del cual leer
 * @param page página donde se cargarán los datos
 */
void bigarray::loadPage(int beg, page page1){

    std::string path = "../IntGenerator/aBigArray.bin";
    std::ifstream file(path, std::ios::binary);

    if(file.is_open()){

        file.seekg(beg);//tengo que revisar si el seek funciona con bytes
        int bytes = sizeof(int);

        for (int i = 0; i < this->pagesize; i++){

            file.read(reinterpret_cast<char *>(&(page1.data)[i]), bytes);

        }
        file.close();

    }else{
        std::cout<<"Error al abrir el archivo"<<std::endl;
    }
}
