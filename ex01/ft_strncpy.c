#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  if(dest == '\0')
  {
      return '\0';
  }
    char *point;
    *point = dest;

    while(*src && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0' ;

    return point;
}
