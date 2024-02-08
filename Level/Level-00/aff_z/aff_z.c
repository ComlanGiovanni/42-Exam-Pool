#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    (void )argc;
    (void )argv;
    write(1, "z\n", 2);
    return (0);
}