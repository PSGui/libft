#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
        char    *d;
        const char      *s;
        size_t  n;
        size_t  dlen;

        d = dest;
        s = src;
        n = size;
        dlen = 0;
        while (n > 0 && *d){
                d++;
                n--;
                dlen++;
        }
        while (n > 1 && *s){
                if (dlen < size - 1){
                        *d++ = *s;
                        dlen++;
                }
                s++;
                n--;
        }
        if (n > 0)
                *d = '\0';
        while (*s){
                s++;
                dlen++;
        }
        return (dlen);
}