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

void ft_put_str(char *str)
{
    int idx;

    idx = 0;

    while (str[idx] != '\0')
    {
        ft_putchar(str[idx]);
        idx++;
    }
}

int ft_strlen(char *str)
{
    int length;

    length = 0;

    while (str[length] != '\0')
        length++;
    return (length);
}


int main (void)
{
    //char *hello;
    //int len_hello;
    
    //hello = "Hello World!\n";
    //len_hello = 12;
    //ft_put_str(hello);
    //write(1, hello, len_hello);
    //write(1, hello, ft_strlen(hello));
    write(1, "Hello World!\n", 13);
    //ft_putstr("Hello World!\n");
    return (0);
}