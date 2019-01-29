//
//  list_append.c
//  
//
//  Created by James Chao on 1/23/19.
//

#include <stdio.h>

/* note, how head_ref is ptr to ptr */
void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    
    new_node->data = new_data;
    
    new_node->next = NULL;
    
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    return;
}
