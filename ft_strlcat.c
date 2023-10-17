#include "libft.h"

size_t my_strlcat(char *dest, const char *src, size_t size)
{
        char    *d;
        const char      *s;
        size_t  n;

        *d = dest;
        *s = src;
        n = size;
        while (n > 0 && *d)
        {
                d++;
                n--;
        }
        while (n > 1 && *s)
        {
                *d++ = *s++;
                n--;
        }
        if (n > 0)
                *d = '\0';
        while (*s)
                s++;
        return (d - dest + (s - src));
}
