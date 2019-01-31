

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

int main()
{
    t_list **f_list_ptr; // ptr to ptr
    void *data_ptr; // void pointer to an int data
    int data; // using int data
    
    data = 0;
    data_ptr = &data;
    
    f_list_ptr = ft_list_push_back(f_list_ptr, data_ptr);

    printf("\n111:  %p", f_list_ptr->data);
}

/*
    what is void *data???
 */
