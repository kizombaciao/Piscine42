//

#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
    t_list *tmp;
    
    if (!begin_list || !*begin_list) {
        return;
    }
    
    while (*begin_list) {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp);
    }
    *begin_list = NULL;
}
