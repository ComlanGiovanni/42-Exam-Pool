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

void rot_13(char *str)
{
    int idx;
    idx = 0;

    while (str[idx] != '\0')
    {
        if (((str[idx] >= 'A') && (str[idx] <= 'M'))
			|| ((str[idx] >= 'a') && (str[idx] <= 'm')))
			str[idx] += 13;
		else if (((str[idx] >= 'N') && (str[idx] <= 'Z'))
			|| ((str[idx] >= 'n') && (str[idx] <= 'z')))
			str[idx] -= 13;
        ft_putchar(str[idx]);
        idx++;
    }
}

int main (int argc, char **argv)
{
    if(argc == 2)
        rot_13(argv[1]);
    ft_putchar('\n');
    return (0);
}