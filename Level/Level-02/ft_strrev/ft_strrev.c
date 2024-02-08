#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    return (str && *str ? ft_strlen(str + 1) + 1 : 0);
}


int ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void ft_swap_char(char *a, char *b)
{
    char tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

char    *ft_strrev(char *str)
{
    int idx;
    int len;
    char tmp;
    
    idx = 0;
    len = ft_strlen(str) - 1;
    while (idx < len)
    {
        ft_swap_char(&str[idx], &str[len]);
        idx++;
        len--;
    }
    return (str);
}

#include <stdio.h>

int main (void)
{
    char myString[] = "Follow the white rabbit....";
    ft_strrev(myString);
    printf("%s", myString);
    return (0);
}
