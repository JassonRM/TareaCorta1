//
// Created by marco on 15/03/18.
//

#ifndef TAREACORTA1_PAGE_H
#define TAREACORTA1_PAGE_H
#define page_size 100

/**
 * @brief The page struct loaded in memory
 */
struct page{

    int pageNum;
    int data[page_size];

};

#endif //TAREACORTA1_PAGE_H
