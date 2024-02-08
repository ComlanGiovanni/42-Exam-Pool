#include "list.h"

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
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

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while ((s1[idx] == s2[idx]) && (s1[idx] != '\0' && s2[idx] != '\0'))
		idx++;
	return (s1[idx] - s2[idx]);
}

t_list *ft_new_node(void *data)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (node = NULL);
    node->data = data;
    node->next = NULL;
    return (node);
}

i_list	*ft_new_elem(int data)
{
	i_list	*node;

	node = (i_list *)malloc(sizeof(i_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list != NULL)
    {
        if (begin_list->data)
            (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

void ft_list_foreach_space_int(i_list *begin_list, void (*f)(int))
{
    while (begin_list != NULL)
    {
        if (begin_list->data)
            (*f)(begin_list->data);
        ft_putstr(" - ");
        begin_list = begin_list->next;
    }
}

int ft_list_size(t_list *begin_list)
{
    int size;

    size = 0;
    while (begin_list != NULL)
    {
        size++;
        begin_list = begin_list->next;
    }
    return (size);
}

int ascending(int a, int b)
{
    return (a <= b);
}

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

i_list *sort_list(i_list *lst, int (*cmp)(int, int))
{
    i_list *tmp;

    tmp = lst;
    while (lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            ft_swap(&lst->data, &lst->next->data);
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	current = *begin_list;
	if (cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	current = *begin_list;
	ft_list_remove_if(&current->next, data_ref, cmp);
}

int main(void)
{
    t_list *my_list;
    i_list *my_list_of_int;

    my_list = ft_new_node("Follow the ");
    my_list->next = ft_new_node("White rabbit...");
    my_list->next->next = ft_new_node("!");
    my_list->next->next->next = ft_new_node("!");

    ft_list_foreach(my_list, (void *)ft_putstr);
    ft_putstr("\nIn my_list there is ");
    ft_small_putnbr(ft_list_size(my_list));
    ft_putstr(" elements\n");

    my_list_of_int = ft_new_elem(334);
    my_list_of_int->next = ft_new_elem(416);
    my_list_of_int->next->next = ft_new_elem(293);
    my_list_of_int->next->next->next = ft_new_elem(13);
    my_list_of_int->next->next->next->next = ft_new_elem(32);
    my_list_of_int->next->next->next->next->next = ft_new_elem(5);
    ft_list_foreach_space_int(my_list_of_int, (void *)ft_small_putnbr);
    sort_list(my_list_of_int, ascending);
    ft_putstr("\nList after sorting int ascending !\n");
    ft_list_foreach_space_int(my_list_of_int, (void *)ft_small_putnbr);







    t_list	*test_list;
	t_list	**begin_list;

	begin_list = &test_list;
	test_list = ft_new_node("Follow the ");
	test_list->next = ft_new_node("White rabbit...");
	test_list->next->next = ft_new_node("!");
	test_list->next->next->next = ft_new_node("!");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");
	ft_list_remove_if(begin_list, "!", ft_strcmp);
	ft_putstr("Removing the dot -> (!)\n");
	ft_list_foreach(test_list, (void *)ft_putstr);
	ft_putstr("\n");

    return (0);
}
