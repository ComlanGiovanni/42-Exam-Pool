#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

void last_word(char *str)
{
    int idx;
    
    idx = ft_strlen(str) - 1;
    while(str[idx] == ' ' || str[idx] == '\t')
        idx--;
    while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
        idx--;
    idx++;
    while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
    {
        ft_putchar(str[idx]);
        idx++;
    }

}

int main (int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    ft_putchar('\n');
    return (0);
}