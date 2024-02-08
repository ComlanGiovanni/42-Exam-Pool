#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    return (str && *str ? ft_strlen(str + 1) + 1 : 0);
}

char *ft_strcpy(char *dest, char *src)
{
    int idx;
    idx = 0;

    while (src[idx] != '\0')
    {
        dest[idx] = src[idx];
        idx++;
    }
    dest[idx] = '\0';
    return (dest);
}

char  *ft_strdup(char *src)
{
    int len;
    
    char *dest;

    len = ft_strlen(src);
    if (!(dest = (char *)malloc(sizeof(char ) * (len + 1))))
        return (NULL);
    return (ft_strcpy(dest, src));
}

#include <stdio.h>

int main(void)
{
    printf("%s", ft_strdup("Hello my friend..."));
    return (0);
}