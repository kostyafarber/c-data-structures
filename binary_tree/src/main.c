/*
* A program that for binary trees
*/

#include "binary_tree.h"

int
main(int argc, char **argv) {
    struct tree* root = talloc(root);
    struct tree* left = talloc(left);
    root->val = 10;
    left->val = 20;
    root->left_child = left;
    printf("Root val is: %d\n", root->val);
    printf("Root left child is: %p\n", root->left_child);
    free(root);

}