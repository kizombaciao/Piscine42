//
#include "ft_list.h"

int main()
{
    int num;
    t_list *begin_list;
    
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
    
    begin_list = head;
    
    num = ft_list_size(begin_list);
    printf("\nCOUNT:  %d     %p", num, begin_list);

    tmp = ft_list_last(begin_list);
    printf("\nLAST:  %p", tmp);
}
