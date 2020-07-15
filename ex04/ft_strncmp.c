int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    n = 0;
    if (s1 == '\0' && s2 == '\0')
    {
        ft_putnbr(-1);
    }
    else if (s1 > s2 || s1 < s2)
    {
        ft_putnbr(-1);
    }
    else if(s1 == s2)
    {
        ft_putnbr(1);
    }
    n++;
    return 0;
}