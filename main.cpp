#include <iostream>
#include <cstdlib>

#include "bigarray.h"
#include "QuickSort.h"

int main() {
    std::ofstream myfile;
    int arraySize = 10000;
    myfile.open("aBigArray.bin", std::ios::binary);
    if(myfile.is_open()){
        for(int i = 0; i < arraySize; i++) {
            int x = rand() % 10000;
            myfile.write(reinterpret_cast<char *>(&x), sizeof(x));

        }
        myfile.close();

    }else{
        std::cout<<"Error al crear el archivo"<<std::endl;
    }

    bigarray *myarray = new bigarray("aBigArray.bin");

    std::atexit(myarray->save);

    printArray(*myarray,9999);

    std::cout << "\n" <<std::endl;


    quickSort(*myarray,0,9999);

    printArray(*myarray,9999);

    return 0;
}