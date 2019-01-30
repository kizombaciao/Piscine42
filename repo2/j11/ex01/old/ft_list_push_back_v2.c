//

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    int i;
    t_list *tmp_list_ptr;
    tmp_list_ptr = *begin_list;
    
    printf("\n222: %p", begin_list);
    printf("\n333a: %p", *begin_list);
    printf("\n333b: %p", tmp_list_ptr);
    printf("\n333c: %p", tmp_list_ptr->next);
    /* need () to make it work */
    printf("\n333d: %p", (*begin_list)->next);
   
    i = 0;
    while ((*begin_list) != NULL) {
        i++;
        printf("\niii:  %d", i);
        (*begin_list) = (*begin_list)->next;
    }
    printf("\n444: %p", (*begin_list));
    (*begin_list) = ft_create_elem(data);
    (*begin_list)->num = 12;
    
    
}


/*
 if (!tmp_list_ptr) {
 printf("\nNULL");
 }
 */

/*
 #include "~/Documents/Git/j11/ex00/ft_list.h"

 */
/*
 if (tmp_list_ptr->next == NULL) {
 printf("\nHEY");
 }
 */
