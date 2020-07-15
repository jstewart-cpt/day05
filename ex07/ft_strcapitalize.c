int ft_lowercase(int c)
{
    return (c >= 'a' && c <= 'z');
}
int ft_uppercase(int c)
{
    return (c >= 'A' && c <= 'Z');
}
int ft_if_num(int c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c<= '9');
}

char *ft_strcapitalize(char *str)
{
    char *point;

    point = str;
    while (*point)
    {
        if ((point == str || ft_if_num(*(point - 1))) == 0)
        {
            if (ft_lowercase(*point))
            {
                *point -= 'a' - 'A';
            }
            else if(ft_uppercase(*point))
            {
                *point += 'a' - 'A';
            }
            point++;
        }
    }
    return (str);
}