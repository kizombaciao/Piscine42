//

#include "ft_list.h"

int main()
{
    t_list *head;
    t_list *tmp;

    void *data_ptr;
    int data;
    
    data = 0;
    data_ptr = &data;
    
    head = NULL;
    tmp = head;
    ft_list_push_front(&tmp, data_ptr);
    head = tmp;
    
    ft_list_push_front(&tmp, data_ptr);
    head = tmp;
    
    ft_list_push_front(&tmp, data_ptr);
    head = tmp;
    
    while(tmp != NULL) {
        printf("\n555a #  %p", tmp);
        tmp = tmp->next;
    }
}

/*
 tmp = (t_list*)malloc(sizeof(t_list));
 head = tmp;
 head->num = -11;
 head->next = NULL;
 */


/*
 printf("\n111a: %p", tmp);
 printf("\n111b #1: %p", head);
 
 what is void *data???
    printf("\n111:  %p", f_list_ptr->data);
 
 */

