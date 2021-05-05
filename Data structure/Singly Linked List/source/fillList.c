#include "../header/LinkedList_Base.h"

Errc_code_t fillList(Info_list_t* list, int32_t data)
{
    if (!list->head)
    {
        fprintf(stderr, "[Error] Can not fill out an empty list\n");
        return LL_EC_EMPTY_LIST;
    }

    Linked_list_t* hold = list->head;

    while (hold)
    {
        hold->data = data;
        hold = hold->next;
    }
    
    return LL_EC_SUCESS;
}