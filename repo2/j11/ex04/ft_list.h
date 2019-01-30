//

#ifndef ft_list_h
#define ft_list_h

#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    void            *data;
    int             num;
    struct s_list   *next;
}                   t_list;

t_list *ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);

#endif /* ft_list_h */
