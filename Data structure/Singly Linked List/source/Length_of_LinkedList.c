#include "../header/LinkedList_Base.h"

// Iterative form
int32_t sizeList(Linked_list_t* list)
{
    if (!list)
        return 0;

    Linked_list_t* hold =  list;
    uint32_t count = 0;

    while (hold)
    {
        count++;
        hold = hold->next;
    }
        
    return count;
}

// Recursive form
int32_t sizeListRecursive(Linked_list_t* list)
{
    if (!list)
        return 0;
    
    return 1 + sizeListRecursive(list->next);
}