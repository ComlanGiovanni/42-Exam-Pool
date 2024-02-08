#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

void ft_put_str(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        //ft_putchar(str[idx]);
        write(1, &str[idx],1);
        idx++;
    }
}

int main(void)
{
    ft_putstr("HELLO");
    return (0);
}

/*		Other short or long way to do

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		idx++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		write(1, &str[idx++], 1);
}

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	int	idx;

	idx = -1;
	while (str[idx++])
		write(1, &str[idx], 1);
}

*/
