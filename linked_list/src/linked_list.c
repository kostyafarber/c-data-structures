/*
* Implement a linked list
*/


#include <stdio.h>

#include "linked_list.h"

int
main(int argc, char **argv) {
    linked_list list;
    linked_list_node head;
    head.value = 10;    

    list.head = &head;

    linked_list_node next;
    next.value = 20;
    next.next = NULL;

    head.next = &next;

    printf("Value for head is: %d\n", head.value);
    
    linked_list_node* end = get_end_of_linked_list(&list);

    printf("End of linked list: %d\n", end->value);
    return 0;
}

linked_list_node* 
get_end_of_linked_list(linked_list* list) {
    linked_list_node* head = list->head;

    while (head->next) {
        head = head->next;
    }

    return head;
}