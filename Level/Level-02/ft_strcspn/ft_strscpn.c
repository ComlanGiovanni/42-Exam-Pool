#include <string.h>

char	*ft_strchr(const char *s, int c)
{
    int idx;

    idx = 0;
    while (s[idx] != '\0')
    {
        if (s[idx] == c)
            return ((char *)s);
        idx++;
    }
    return ((void *)0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t idx;

    idx = 0;
    while (s[idx] != '\0')
    {
        if(ft_strchr(reject, s[idx]))
            break;
        idx++;
    }
    return (idx);
}