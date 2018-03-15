//
// Created by Jasson Rodríguez Méndez on 11/3/18.
//

#ifndef TAREACORTA1_BIGARRAY_H
#define TAREACORTA1_BIGARRAY_H

#include <iostream>
#include <string>
#include <fstream>
#include "page.h"


class bigarray {
private:
    /**
     * Number of Int per page
     */
    int pagesize = 100;

    /**
     * Number of pages in memory
     */
    const int buffer_size = 3;

    /**
     * Pages loaded in memory
     */
    page *loaded[buffer_size];

public:
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

};


#endif //TAREACORTA1_BIGARRAY_H
