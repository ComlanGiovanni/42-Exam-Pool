#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('z');
    //write(1, "z",1);
    return (0);
}
