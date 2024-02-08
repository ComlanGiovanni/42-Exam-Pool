#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
    int idx;
    unsigned char bit;
    unsigned char mask;

    idx = 7;
    mask = 1;
    while (idx >= 0)
    {
        bit = (((octet >> idx) & mask) + '0');
        ft_putchar(bit);
        idx--;
    }
}

#include <stdio.h>

int main (void)
{
    char myBite = 3;
    print_bits(2);
    ft_putchar('\n');
    print_bits(myBite);
    ft_putchar('\n');
    print_bits(swap_bits(myBite));
    return (0);
}