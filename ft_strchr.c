#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
        while(*s || (unsigned char)c <= '\0')
        {
                if(*s == (unsigned char)c)
                        return ((char *)c);
                s++;
        }
        return (0);
}
