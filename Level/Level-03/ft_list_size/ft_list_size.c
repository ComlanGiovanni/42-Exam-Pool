#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*fourth;
	t_list	*solo;

	first = ft_new_node("One");
	second = ft_new_node("Two");
	third = ft_new_node((void *)3);
	fourth = ft_new_node("Four");
	solo = ft_new_node("Solo");
	first->next = second;
	second->next = third;
	third->next = fourth;
	printf("%d\n", ft_list_size(first));
	printf("%d\n", ft_list_size(second));
	printf("%d\n", ft_list_size(third));
	printf("%d\n", ft_list_size(solo));
	printf("%d\n", ft_list_size(NULL));
	printf("%d\n", ft_list_size(fourth));
	return (0);
}