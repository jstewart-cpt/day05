char *ft_strlowcase(char *str)
{
    int count;
    count = 0;
    while (str[count])
    {
        if (str[count] >= 'A' && str[count] <= 'A')
        {
            str[count] = str[count] + 32;
            count++;
        }else
        {
            count++;
        }        
    }
    return str;
}