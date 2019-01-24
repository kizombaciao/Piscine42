#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int i;
    
    if (begin_list == NULL) {
        return (NULL);
    }
    
    i = nbr;
    while (begin_list && i--) {
        begin_list = begin_list->next;
    }
    if (i > -1) {
        return (NULL);
    } else {
        return (begin_list);
    }
}

