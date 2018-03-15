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
    int pagesize = 100;
    page page1;
    page page2;
    page page3;

    void savePage(int beg, page page1);
    void loadPage(int beg, page page1);

};


#endif //TAREACORTA1_BIGARRAY_H
