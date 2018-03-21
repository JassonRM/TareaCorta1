#include <iostream>
#include <fstream>
#include "stdlib.h"

int main() {
    std::ofstream myfile;
    int arraySize = 1000000;
    myfile.open("aBigArray1000000.bin", std::ios::binary);
    if(myfile.is_open()){
        for(int i = 0; i < arraySize; i++) {
            int x = rand() % arraySize;
            myfile.write(reinterpret_cast<char *>(&x), sizeof(x));

            x = i + -24;
            myfile.write(reinterpret_cast<char *>(&x), sizeof(x));
        }
        myfile.close();

    }else{
        std::cout<<"Error al crear el archivo"<<std::endl;
    }
    return 0;
}