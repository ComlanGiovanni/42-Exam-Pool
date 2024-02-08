#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    struct s_list *next; 
    int data;
} t_list;

void ft_swap_int(int *a, int *b)
{
    (*a ^= *b), (*b ^= *a), (*a ^= *b);
}

t_list	*ft_add_front(t_list *list, int data)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = data;
	new->next = list;
	return (new);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp;

    tmp = lst;
    while (lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            ft_swap_int(&lst->data, &lst->next->data);
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

int	ascending(int a, int b)
{
	return (a <= b);
}

#include <stdio.h>

int	main(void)
{
    t_list *list;

	list = NULL;
	list = ft_add_front(list, 5);
	list = ft_add_front(list, 3);
	list = ft_add_front(list, 2);
	list = ft_add_front(list, 4);
	list = ft_add_front(list, 1);

	list = sort_list(list, &ascending);

	while(list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	return (0);
}
