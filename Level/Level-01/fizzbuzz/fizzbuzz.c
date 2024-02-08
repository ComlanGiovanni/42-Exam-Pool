#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void print_other_nbr(int number)
{
    if (number > 9)
    {
        print_other_nbr(number / 10);
        print_other_nbr(number % 10);
    }
    else
        ft_putchar(number + '0');
}


void fizzbuzz(void)
{
    int number;

    number = 1;
    while (number <= 100)
    {
        if (((number % 3) == 0) && ((number % 5) == 0))
            ft_putstr("fizzbuzz");
        else if (((number % 3) == 0))
            ft_putstr("fizz");
        else if (((number % 5) == 0))
            ft_putstr("buzz");
        else
            print_other_nbr(number);
        ft_putchar('\n');
        number++;
    }
}

int main (void)
{
    fizzbuzz();
    return (0);
}