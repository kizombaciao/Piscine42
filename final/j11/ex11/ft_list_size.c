//
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int count;
    
    if (begin_list == NULL) {
        return (0);
    }
    
    count = 1;
    while (begin_list->next != NULL) {
        printf("\nCounting:  %d", count);
        begin_list = begin_list->next;
        count++;
    }
    
    return (count);
}
