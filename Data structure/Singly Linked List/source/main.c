#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "../header/LinkedList_Base.h"

int main()
{
    Info_list_t linkedList = {0};

    insertion(&linkedList, 2);
    insertion(&linkedList, 9);
    insertion(&linkedList, 0);
    insertion(&linkedList, 1);
    insertion(&linkedList, 88);
    insertion(&linkedList, 5);
    insertion(&linkedList, 22);

    printLinkedList(&linkedList);

    deleteNo(&linkedList, 9);
    printLinkedList(&linkedList);

    deleteNo(&linkedList, 9);
    printLinkedList(&linkedList);

    deleteNo(&linkedList, 0);
    printLinkedList(&linkedList);

    deleteNo(&linkedList, 88);
    printLinkedList(&linkedList);

    int32_t sizeOfList = sizeListRecursive(linkedList.head);

    printf("The size of the list is %d\n", sizeOfList);

    fillList(&linkedList, 10);
    printLinkedList(&linkedList);

    fillList(&linkedList, 1000);
    printLinkedList(&linkedList);

    return 0;
}