#ifndef LINKKED_LIST_BASE_H
    #define LINKKED_LIST_BASE_H

    #include <stdint.h>
    #include <stdlib.h>
    #include <stdio.h>

    #include "Error_code.h"

    typedef struct LINKED_LIST
    {
        int32_t data;// Can be any information
        struct LINKED_LIST* next;
    } Linked_list_t;

    typedef struct INFO_LIST
    {
        uint32_t quantifyElements;
        Linked_list_t* head;
        Linked_list_t* tail;
    }Info_list_t;

    Errc_code_t insertion(Info_list_t* , const int32_t);
    Errc_code_t printLinkedList(Info_list_t*);
    //Delete
    //update
    //research

#endif