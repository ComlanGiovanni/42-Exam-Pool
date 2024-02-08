#include <stdlib.h>

int ft_absolute_value(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}

int     *ft_range(int start, int end)
{
    int idx;
    int size;
    int step;
    int *tab;

    idx = 0;
    size = 1 + ft_absolute_value(start - end);
    tab = (int *)malloc(sizeof(int) * size);
    if (!tab)
        return (NULL);
    if (start < end)
        step = 1;
    else
        step = -1;
    while (idx < size)
    {
        tab[idx] = start;
        start = start + step;
        idx++;
    }
    return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = 0;
	end = -3;
	tab = ft_range(start, end);
	size = ft_absolute_value(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}