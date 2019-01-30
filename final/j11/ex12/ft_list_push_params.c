//

#include "ft_list.h"


t_list *ft_list_push_params(int ac, char **av)
{
    int i;
    t_list *tmp_ptr;
    t_list *new_list_ptr;
    
    if (ac <= 0) {
        return (NULL);
    }
    
    i = 0;
    tmp_ptr = NULL;
    while (i < ac) {
        new_list_ptr = ft_create_elem(av[i]);
        new_list_ptr->next = tmp_ptr;
        tmp_ptr = new_list_ptr;
        i++;
    }
    return (new_list_ptr);
}
