#include <unistd.h> // For write // For Write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int				idx;
	unsigned char	bit;

	idx = 7;
	while (idx >= 0)
	{
		bit = ((bit * 2) + (octet % 2));
		octet /= 2;
		idx--;
	}
	return (bit);
}

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	mask;
	unsigned char	bit;

	idx = 7;
	mask = 1;
	while (idx >= 0)
	{
		bit = (((octet >> idx) & mask) + '0');
		ft_putchar(bit);
		idx--;
	}
}

int	main(void)
{
	print_bits(2);
	ft_putchar('\n');
	print_bits(reverse_bits(2));
	ft_putchar('\n');
}