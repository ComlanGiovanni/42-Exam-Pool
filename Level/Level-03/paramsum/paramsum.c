#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	main(int argc, char **argv)
{
	(void)argv;
	ft_small_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
}