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

    putchar('\n');
    printLinkedList(&linkedList);

    return 0;
}