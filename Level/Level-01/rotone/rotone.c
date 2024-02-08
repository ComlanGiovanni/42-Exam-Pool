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

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while(str[length] != '\0')
        length++;
    return(length);
}

void rotone(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (((str[idx] >= 'a') && (str[idx] <= 'y'))|| ((str[idx] >= 'A') && (str[idx] <= 'Y')))
            str[idx] += 1;
        else if ((str[idx] == 'z') || (str[idx] == 'Z'))
            str[idx] -= 25;
        ft_putchar(str[idx]);
        idx++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    ft_putchar('\n');
    return (0);
}