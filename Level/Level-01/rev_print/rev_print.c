#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
		ft_putchar(*str);
		str++;
	}
}

int ft_strlen(char *str)
{
    int length;
    length = 0;

    while(str[length] != '\0')
        length++;

    return (length);
}

void ft_swap_char(char *a, char *b)
{
    char tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void rev_print(char *str)
{
    int length;
    length = ft_strlen(str) - 1;
    while (length >= 0)
    {
        ft_putchar(str[length]);
        length--;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    ft_putchar('\n');
    return (0);
}