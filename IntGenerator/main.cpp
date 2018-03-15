#include <iostream>
#include <fstream>
#include "stdlib.h"

int main() {
    std::ofstream myfile;
    int arraySize = 1000;
    myfile.open("aBigArray.bin", std::ios::binary);
    if(myfile.is_open()){
        for(int i = 0; i < arraySize; i++) {
            int x = rand();
            myfile.write(reinterpret_cast<char *>(&x), sizeof(x));
        }
        myfile.close();

    }else{
        std::cout<<"Error al crear el archivo"<<std::endl;
    }
    return 0;
}