
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
    t_list *t_list_ptr;
    
    t_list_ptr = NULL;
    t_list_ptr = malloc(sizeof(t_list));
    
    if (t_list_ptr) {
        t_list_ptr->data = data;
        t_list_ptr->next = NULL;
        t_list_ptr->num = 11;
    }
    printf("\n111:  %p", t_list_ptr->data);

    return (t_list_ptr);
}


