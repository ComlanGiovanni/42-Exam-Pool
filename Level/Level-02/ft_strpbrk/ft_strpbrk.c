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

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int idx;

    idx = 0;
    while (s1[idx] != '\0')
    {
        if (ft_strchr(s2, s1[idx]))
            return ((char *)s1);
        idx++;
    }
    return ((void *)0);
}
