



void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
    if (*root == NULL) {
        return (btree_create_node(item));
    } else if ((*compf)(item, (*root)->item) < 0) {
        btree_insert_data(&(*root)->left, item, cmpf);
    } else {
        btree_insert_data(&(*root)->right, item, cmpf);
    }

}