char *ft_strupcase(char *str)
{
    int count;
    count = 0;
    while (str[count])
    {
        if (str[count] >= 'a' && str[count] <= 'z')
        {
            str[count] = str[count] - 32;
            count++;
        }else
        {
            count++;
        }        
    }
    return str;
}