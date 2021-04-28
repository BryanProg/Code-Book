#include "../header/LinkedList_Base.h"

Errc_code_t delete(Info_list_t* list, const int32_t information)
{
    if (!list->head && !list->tail)
    {
        fprintf(stderr, "Impossible removal, empty list\n");
        return LL_EC_EMPTY_LIST;
    }
    
    Linked_list_t* temp = 0;

    if (information == list->head->data)
    {
        temp       = list->head;
        list->head = list->head->next;
    }
    else 
    {
        Linked_list_t* hold = list->head;

        while (1)
        {
            if (!hold->next)
                break;

            if (hold->next->data == information)
            {
                temp       = hold->next;
                hold->next = hold->next->next;
                break;
            }
            
            hold = hold->next;
        }
        
    }

    if (!temp)
    {
        fprintf(stderr, "Element does not exist on the list\n");
        return LL_EC_NON_EXIST_ELEMENT;
    }

    free(temp);
    list->quantifyElements--;

    return LL_EC_SUCESS;

}