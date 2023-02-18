#include <binary_tree.h>

struct tree* talloc(struct tree *alloc_tree) {
    alloc_tree = (struct tree*) malloc(sizeof(struct tree*));

    if (!alloc_tree) {
        printf("malloc error");
        exit(EXIT_FAILURE);
    }

    return alloc_tree;
}