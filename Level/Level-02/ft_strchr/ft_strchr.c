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