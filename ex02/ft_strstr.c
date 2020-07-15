char    *ft_strstr(char *str, char *to_find)
{
    while (*str)
    {
    char *firststr;
    char *secstr;
    firststr = str;
    secstr = to_find;

    while(*str && *secstr && *str == *secstr)
    {
        str++;
        secstr++;
    }
    if (! *secstr)
    return firststr;
    }

    return 0;
}