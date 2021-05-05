#include "../header/LinkedList_Base.h"

Errc_code_t deleteFirst(Info_list_t* list)
{
    if (!list->head)
    {
        fprintf(stderr, "Impossible removal, empty list\n");
        return LL_EC_EMPTY_LIST;
    }

    Linked_list_t* temp = list->head;
    list->head = list->head->next;

    free(temp);

    return LL_EC_SUCESS;
}