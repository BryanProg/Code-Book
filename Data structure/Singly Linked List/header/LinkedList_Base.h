#ifndef LINKKED_LIST_BASE_H
    #define LINKKED_LIST_BASE_H

    #include <stdint.h>
    #include <stdlib.h>

    #include "Error_code.h"

    typedef struct LINKED_LIST
    {
        int32_t date;// Can be any information
        struct LINKED_LIST* next;
    } Linked_list_t;

    typedef struct INFO_LIST
    {
        uint32_t quantifyElements;
        Linked_list_t* head;
    }Info_list_t;
    

    Errc_code_t insertion(Linked_list_t*, int32_t, uint32_t);
    //Delete
    //update
    //research

#endif