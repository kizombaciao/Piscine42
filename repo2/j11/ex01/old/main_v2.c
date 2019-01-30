//

#include "ft_list.h"

int main()
{
    t_list **f1_list_ptr;
    t_list *f2_list_ptr;
    t_list *head;
    void *data_ptr;
    int data;
    
    data = 0;
    data_ptr = &data;
    
    f2_list_ptr = (t_list*)malloc(sizeof(t_list));
    head = f2_list_ptr;
    f1_list_ptr = &f2_list_ptr;
    /* note, malloc required before assigning NULL */
    f2_list_ptr->next = NULL;
    
    printf("\n111a: %p", f1_list_ptr);
    printf("\n111b: %p", f2_list_ptr);
    ft_list_push_back(f1_list_ptr, data_ptr);

    f2_list_ptr = head;
    printf("\n555-a: %p", head);
    while(f2_list_ptr != NULL) {
        printf("\n555a  %p", f2_list_ptr->next);
        f2_list_ptr = f2_list_ptr->next;
    }
}

/*
 what is void *data???
    printf("\n111:  %p", f_list_ptr->data);
 
 */

