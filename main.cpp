#include <iostream>

#include "bigarray.h"

int main() {
    bigarray *myarray = new bigarray("../IntGenerator/counterBigArray.bin");
    std::cout<< (*myarray)[124] << std::endl;
    std::cout<< (*myarray)[999] << std::endl;
    std::cout<< (*myarray)[477] << std::endl;
    std::cout<< (*myarray)[1001] << std::endl;
    std::cout<< (*myarray)[342] << std::endl;
    std::cout<< (*myarray)[732] << std::endl;
    std::cout<< (*myarray)[643] << std::endl;
    std::cout<< (*myarray)[1] << std::endl;
    return 0;
}