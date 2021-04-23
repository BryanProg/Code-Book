#include "../header/LinkedList_Base.h"

Errc_code_t insertion(Info_list_t* list, const int32_t information)
{
    Linked_list_t* newNode = (Linked_list_t*) malloc(sizeof(Linked_list_t));
    if(!newNode)
    {
        fprintf(stderr, "Without memory");
        return LL_EC_WITHOUT_MEMORY;
    }

    newNode->data = information;
    newNode->next = 0;

    if (!(list->head) && !(list->tail))
    {
        list->head = newNode;
        list->tail = newNode;
    }
    else if (list->head->data >= information)
    {
        newNode->next = list->head;
        list->head = newNode;
    }
    else if (list->tail->data <= information)
    {
        list->tail->next = newNode;
        list->tail = newNode;
    }
    else
    {
        Linked_list_t* hold = list->head;

        while (1)
        {
            if(hold->next->data >= information)
                break;
            
            hold = hold->next;
        }
    
        newNode->next = hold->next;
        hold->next = newNode;
   }
   
    list->quantifyElements++;

    return LL_EC_SUCESS;
}