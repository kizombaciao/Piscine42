//

#include "ft_list.h"

int main()
{
    t_list **f_list_ptr;
    void *data_ptr;
    int data;
    
    data = 0;
    data_ptr = &data;
    
    *f_list_ptr = NULL;
    
    ft_list_push_back(f_list_ptr, data_ptr);


}

/*
 what is void *data???
    printf("\n111:  %p", f_list_ptr->data);
 
 */

