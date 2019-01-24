//

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *tmp;
    
    if ((*begin_list) == NULL) {
        (*begin_list) = ft_create_elem(data);
        printf("\nNULL added:  %p", (*begin_list));
        return;
    } else {
/* do i need to traverse to the start of the list */
        
        tmp = (*begin_list);
        (*begin_list) = ft_create_elem(data);
        (*begin_list)->next = tmp;
        printf("\nInsert added: %p  %p", (*begin_list), tmp);
        (*begin_list)->num = 22;
    }
}
