#include <iostream>
#include <fstream>
#include <ostream>

int main() {
    std::ofstream myfile;

    myfile.open("myfile.txt");
    std::cout<< myfile.is_open()<< std::endl;
    myfile << "Hola mundo";
    myfile.close();

    return 0;
}