#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_str_capitalizer(char *str)
{
	int	idx;

	idx = 1;
	if (str[0] >= 'a' && 'z' >= str[0])
		str[0] -= 32;
	ft_putchar(str[0]);
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && 'Z' >= str[idx])
			str[idx] += 32;
		if ((str[idx] >= 'a' && 'z' >= str[idx]) && (str[idx - 1] == ' '
				|| str[idx - 1] == '\t'))
			str[idx] -= 32;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char *argv[])
{
	int	idx;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		idx = 1;
		while (idx < argc)
		{
			ft_str_capitalizer(argv[idx]);
			ft_putchar('\n');
			idx++;
		}
	}
	return (0);
}