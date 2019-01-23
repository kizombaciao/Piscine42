//

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *tmp_list_ptr;
    tmp_list_ptr = *begin_list;
    
    if (!tmp_list_ptr) {
        printf("\nNULL");
    }
    
    /*
    tmp_list_ptr = ft_create_elem(data);
    */
    /*
    while (tmp_list_ptr) {
        tmp_list_ptr = tmp_list_ptr->next;
    }
    if (tmp_list_ptr->next == NULL) {
        printf("\nHEY");
    }
    */
}



/*
 #include "~/Documents/Git/j11/ex00/ft_list.h"

 */
