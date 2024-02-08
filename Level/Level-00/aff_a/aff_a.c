#include <unistd.h> // for write

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void aff_a(char *str)
{
	int idx;
	idx = 0;

	while (str[idx] != '\0')
	{
		if (str[idx] == 'a')
		{
			ft_putchar('a');
			break;
		}
		idx++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}