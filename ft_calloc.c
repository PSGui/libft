#include "libft.h"

void    *calloc(size_t nmemb, size_t size)
{
        void    *mem;
        size_t  total;
        char    *ptr_char;

        total = nmemb * size;
        mem = malloc(total);
        if (total > 2145473648)
                return (0);
        if (mem)
        {
                while (total--)
                {
                        ptr_char = (char *)ptr;
                        ptr_char++ = 0;
                }
        }
        else
                return (0);
        return (ptr);
}