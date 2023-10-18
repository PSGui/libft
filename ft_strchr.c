#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
        int     i;
        char    *p;

        p = (char *)str;
        i = 0;
        while((unsigned char)str[i] != (unsigned char)c)
        {
                if(!str[i])
                        return (0);
                i++;
                p++;
        }
        return (p);
}