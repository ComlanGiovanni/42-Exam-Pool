#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

int ft_small_atoi(char *str)
{
    int idx;
    int result;

    idx = 0;
    result = 0;
    while (str[idx] != '\0')
    {
        result *= 10;
        result += str[idx] - '0';
        idx++;
    }
    return (result);
}

void	ft_small_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void tab_mult(char *str)
{
    int idx;
    int nbr;

    idx = 1;
    nbr = ft_small_atoi(str);
    while (idx <= 9)
    {
        ft_small_putnbr(idx);
        ft_putstr(" x ");
        ft_small_putnbr(nbr);
        ft_putstr(" = ");
        ft_small_putnbr(nbr * idx);
        if (idx < 9)
            ft_putchar('\n');
		idx++;
    }
}

int main (int argc, char **argv)
{
    if(argc == 2)
        tab_mult(argv[1]);
    ft_putchar('\n');
    return (0);
}