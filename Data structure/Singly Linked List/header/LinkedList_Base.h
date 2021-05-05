#ifndef LINKKED_LIST_BASE_H
    #define LINKKED_LIST_BASE_H

    #include <stdint.h>
    #include <stdlib.h>
    #include <stdio.h>

    #include "Error_code.h"

    typedef struct LINKED_LIST
    {
        int32_t data;
        struct LINKED_LIST* next;
    } Linked_list_t;

    typedef struct INFO_LIST
    {
        uint32_t quantifyElements;
        Linked_list_t* head;
        Linked_list_t* tail;
    }Info_list_t;

    int32_t sizeList(Linked_list_t*);
    int32_t sizeListRecursive(Linked_list_t*);

    Errc_code_t insertion(Info_list_t* , const int32_t);
    Errc_code_t printLinkedList(Info_list_t*);
    Errc_code_t deleteNo(Info_list_t*, const int32_t);
    Errc_code_t deleteFirst(Info_list_t*);
    Errc_code_t fillList(Info_list_t*, int32_t);

    //research

#endif