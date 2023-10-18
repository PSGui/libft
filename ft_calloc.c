#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void        *mem;
    size_t      total;
    char        *ptr_char;
    size_t      i;

    if (size == 0 || nmemb >= (2146473647 / size))
        return (0);
    total = nmemb * size;
    mem = malloc(total);
    if (!mem)
        return (0);
    ptr_char = (char *)mem;
    i = 0;
    while (i < total)
    {
        ptr_char[i] = 0;
        i++;
    }
    return (mem);
}