#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

char **ft_rev_wstr(char *str)
{
	int idx;
	int row;
	int column;
	char **tab;

	idx = 0;
	row = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[idx] != '\0')
	{
		if (str[idx] > ' ')
		{
			column = 0;
			if(!(tab[row] = (char *)malloc(sizeof(char) * 4092)))
				return (NULL);
			while (str[idx] > ' ')
			{
				tab[row][column] =  str[idx];
				column++;
				idx++;
			}
			tab[row][column] = '\0';
			row++;
		}
		else
			idx++;
	}
	tab[row] = NULL;
	return (tab);
}

int	main(int argc, char **argv)
{
	int idx;
	char **word;
	if (argc == 2)
	{
		word = ft_rev_wstr(argv[1]);
		while (word[idx] != NULL)
			idx++;
		idx--;
		while (idx >= 0)
		{
			ft_putstr(word[idx]);
			if (idx > 0)
				ft_putchar(' ');
			idx--;
		}
	}
	ft_putchar('\n');
	return (0);
}

