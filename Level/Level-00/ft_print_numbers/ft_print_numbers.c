#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_numbers(void)
{
    int digit;

    digit = 0;

    while (digit <= 9)
    {
        ft_putchar(digit + '0');
        digit++;
    }
}

int main(void)
{
    ft_print_numbers();
    //write(1,"0123456789", 10);
    return (0);
}