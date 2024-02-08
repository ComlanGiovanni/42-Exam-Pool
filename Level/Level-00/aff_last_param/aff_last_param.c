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

int main (int argc, char **argv)
{
    if (argc > 1)
    {
        argc--;
        ft_putstr(argv[argc]);
        //ft_putstr(&argv[--argc][0]);
    }
    ft_putchar('\n');
    return (0);
}