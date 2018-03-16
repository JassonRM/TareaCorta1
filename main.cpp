#include <iostream>

#include "bigarray.h"
#include "QuickSort.h"

int main() {
    std::ofstream myfile;
    int arraySize = 1000;
    myfile.open("aBigArray.bin", std::ios::binary);
    if(myfile.is_open()){
        for(int i = 0; i < arraySize; i++) {
            int x = rand() % 500;
            myfile.write(reinterpret_cast<char *>(&x), sizeof(x));

        }
        myfile.close();

    }else{
        std::cout<<"Error al crear el archivo"<<std::endl;
    }

    bigarray *myarray = new bigarray("aBigArray.bin");

    printArray(*myarray,999);

    std::cout << "\n" <<std::endl;


    quickSort(*myarray,0,999);

    printArray(*myarray,999);

    return 0;
}