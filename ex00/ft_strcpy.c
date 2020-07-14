#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putstr(char *str)
{
    int count;
    count = 0;
    while(str[count])
    {
        ft_putchar(str[count]);
        count++;
    }
}
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