#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0; // note, counter starts from zero
	while (begin_list)
	{
		begin_list = begin_list->next;
		++i;
	}
	return (i); // think about if counter overshoots???
}

int main()
{
    t_list *tmp, *tmp2;
    int *p;
    int n;
    
    tmp = (t_list *)malloc(sizeof(t_list));
    tmp->data = p;
    tmp->next = NULL;
    
    tmp2 = (t_list *)malloc(sizeof(t_list));
    tmp2->data = p;
    tmp2->next = tmp;
    
    n = ft_list_size(tmp2);
    printf("\n%d", n);
}
