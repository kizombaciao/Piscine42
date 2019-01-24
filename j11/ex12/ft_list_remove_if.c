//

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *curr;
    t_list *prev;
    t_list *nxt;
    
    nxt = NULL;
    prev = NULL;
    curr = *begin_list;
    
    while (curr) {
        nxt = curr->next;
        
        if ((*cmp)(data_ref, curr->data) == 0) {
            prev->next = curr->next;
            free(curr);
            curr = nxt;
        }
        prev = curr;
        curr = curr->next;
    }
    
    
}
