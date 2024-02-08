char *ft_strcpy(char *s1, char *s2)
{
    int idx;

    idx = 0;
    while (s2[idx] != '\0')
    {
        s1[idx] = s2[idx];
        idx++;
    }
    s1[idx] = '\0';
    return (s1);
}
/*		Other short or long way to do

char	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++))
		;
	return (s1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	idx = 0;
	while (s2[idx++] != '\0')
		s1[idx] = s2[idx];
	s1[idx] = '\0';
	return (s1);
}

*/
