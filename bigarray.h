//
// Created by Jasson Rodríguez Méndez on 11/3/18.
//

#ifndef TAREACORTA1_BIGARRAY_H
#define TAREACORTA1_BIGARRAY_H
#define buffer_size 3


#include <iostream>
#include <string>
#include <fstream>
#include "page.h"


class bigarray {
private:
    /**
     * Number of Int per page
     */
    int pagesize = pageSize;

    /**
     * Path of the file
     */
    std::string path;

    /**
     * Pages loaded in memory
     */
    page *loaded[buffer_size];

public:
    /**
     * Constructor
     * @param path to the containing folder
     * @param name of the file
     */
    bigarray(std::string path, std::string name);
    /**
     *
     * @param fullpath path to the file
     */
    bigarray(std::string fullpath);
    /**
     * Escribe una página específica a disco.
     * @param beg valor del byte a partir del cual escribir
     * @param page página que se desea escirbir
     */
    void savePage(int beg,page *page1);

    /**
     * Lee una página específica a disco.
     * @param beg valor del byte a partir del cual leer
     * @param page página donde se cargarán los datos
     */
    void loadPage(int beg, page *page1);

    /**
     * Subscripting bigarray
     * @param index
     * @return value located at index
     */
    int &operator[](int index);

    /**
     * Save the array loaded in memory
     */
    void save();
};


#endif //TAREACORTA1_BIGARRAY_H
