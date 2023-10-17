#include "libft.h"

char    *ft_strrchr(const char *str, int ch)
{
        char *r;

        r = 0;
        while (*str)
        {
                if (*str == ch)
                        r = (char *)str;
                str++;
        }
        if (ch == '\0')
                return ((char *)str);
        return (r);
}