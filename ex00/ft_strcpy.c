char *ft_strcpy(char *dest, char *src)
{
    int count;
    count = 0;
    while (src[count])
    {
        dest [count] = src [count];
        count++;
    }
    return dest;
}
