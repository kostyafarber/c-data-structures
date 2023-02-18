#include <stdlib.h>
#include <stdio.h>

struct tree {
    int val;
    struct tree *left_child;
    struct tree *right_child;
};

struct tree* talloc(struct tree *alloc_tree);
