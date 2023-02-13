typedef struct linked_list_node {
    int value;
    struct linked_list_node* next;
} linked_list_node;

typedef struct {
    linked_list_node* head;
} linked_list;

linked_list_node* 
get_end_of_linked_list(linked_list* list);

void append_to_linked_list(linked_list_node* node, linked_list *list);

void print_tail(linked_list *list);