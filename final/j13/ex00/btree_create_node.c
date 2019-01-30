#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
    t_btree *temp;
    
    temp = (t_btree *)malloc(sizeof(t_btree));
    if (temp) {
        temp->item = item;
        temp->left = 0;  /* Note, it can be 0 */
        temp->right = 0;
    }
    return (temp);
}


int main()
{
    t_btree *root;
    void *item;
    int key;
    
    root = NULL;
    item = &key;
    key = 11;
    
    printf("\n111:  %p", item);
    root = btree_create_node(item);
    printf("\n111:  %p   %p", root->left, (*root).item);
    
}
