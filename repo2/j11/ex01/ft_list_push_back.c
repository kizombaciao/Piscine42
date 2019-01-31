#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *tmp;
    
    if ((*begin_list) == NULL) {
        (*begin_list) = ft_create_elem(data);
        printf("\nNULL added:  %p", (*begin_list));
        return;
    } else {
    
        while ((*begin_list)->next != NULL) {
            (*begin_list) = (*begin_list)->next;
        }
        tmp = ft_create_elem(data);
        (*begin_list)->next = tmp;
        
        printf("\nInsert added: %p", (*begin_list)->next);
        (*begin_list)->num = 22;
    }
}


/*
 (*begin_list)->next = NULL;
    printf("\n666a #2  %p", (*begin_list)->next);
 printf("\n666b  %d", (*begin_list)->num);
 
 int i;
 t_list *tmp_list_ptr;
 tmp_list_ptr = *begin_list;
 
 printf("\n222a: %p", begin_list);
 printf("\n222b: %p", *begin_list);
 printf("\n222c: %p", tmp_list_ptr);
 
 printf("\n333a: %p", tmp_list_ptr->next);
  need () to make it work
printf("\n333b: %p", (*begin_list)->next);

 
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
