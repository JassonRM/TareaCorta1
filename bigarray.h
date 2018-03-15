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
    page page1;
    page page2;
    page page3;

    /**
     * Number of pages in memory
     */
    int buffer_size = 3;

    /**
     * Pages loaded in memory
     */
    page *loaded[buffer_size];

    /**
     * Subscripting bigarray
     * @param index
     * @return value located at index
     */
    int &operator[](int index){
        int current = index / pagesize;
        for(int i = 0; i < buffer_size, i++){
            if(loaded[i] == current){
                page used = loaded[0];
                loaded[0] = loaded[i];
                loaded[i] = used;
                return used.data[index - current * pagesize];
            }else{
                delete loaded[buffer_size - 1];
                page *load = new page(current);
                load.data =
                loaded[buffer_size - 1];
            }
        }
    }

};


#endif //TAREACORTA1_BIGARRAY_H
