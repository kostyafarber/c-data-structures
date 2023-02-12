typedef struct linked_list_node {
    int value;
    struct linked_list_node* next;
} linked_list_node;

typedef struct {
    linked_list_node* head;
} linked_list;

linked_list_node* 
get_end_of_linked_list(linked_list* list);
