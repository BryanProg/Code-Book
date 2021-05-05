#include "../header/LinkedList_Base.h"

Errc_code_t printLinkedList(Info_list_t* list)
{
    if (!list)
    {
        fprintf(stderr, "Null list");
        return LL_EC_NULL_LIST;
    }

    Linked_list_t* hold = list->head;

    printf("Star of the list -> ");
    while (1)
    {
        printf("%d -> ", hold->data);
        
        if(!hold->next)
            break;
        
        hold = hold->next;
    }
    
    puts("End of the list\n");

    return LL_EC_SUCESS;
}