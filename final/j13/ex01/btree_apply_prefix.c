
#include <stdlib.h>

void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
    while (root != NULL) {
        if ((*applyf)(void *)) {
            root = root->right;
        } else if ((*applyf)(void *)) {
            root = root->left;
        } else {
            return (1);
        }
    }
}
