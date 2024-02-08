#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_countdown(void)
{
    int digit;

    digit = 9;
    while (digit >= 0)
    {
        ft_putchar(digit + '0');
        digit--;
    }
}

int main (void)
{
    ft_countdown();
    ft_putchar('\n');
    //write(1, "9876543210\n", 11);
    return (0);
}