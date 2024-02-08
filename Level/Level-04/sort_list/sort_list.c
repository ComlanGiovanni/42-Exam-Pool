#include "list.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_swap_int(int *a, int *b)
{
    (*a ^= *b), (*b ^= *a), (*a ^= *b);
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

void ft_small_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_small_putnbr(nbr / 10);
        ft_small_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*ft_new_elem(int data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

t_list	*ft_add_front(t_list *list, int data)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = data;
	new->next = list;
	return (new);
}

void	ft_list_foreach_space(t_list *begin_list, void (*f)(int))
{
	while (begin_list != NULL)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		ft_putchar(' ');
		begin_list = begin_list->next;
	}
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem(4);
	test_list->next = ft_new_elem(9);
	test_list->next->next = ft_new_elem(1);
	test_list->next->next->next = ft_new_elem(3);
	test_list->next->next->next->next = ft_new_elem(6);
	test_list->next->next->next->next->next = ft_new_elem(2);
	test_list->next->next->next->next->next->next = ft_new_elem(8);

	ft_list_foreach_space(test_list, (void *)ft_small_putnbr);
	sort_list(test_list, &ascending);
	ft_putchar('\n');
	ft_list_foreach_space(test_list, (void *)ft_small_putnbr);
	ft_putchar('\n');
	ft_putchar('\n');
    ft_small_putnbr(0);
	return (0);
}