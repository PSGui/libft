#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
        size_t  i;
        unsigned char *mem;

        i = 0;
        mem = (unsigned char *)s;
        while (i < n)
        {
                mem[i] = '\0';
                i++;
        }
}

/*
#include <stddef.h>
#include <stdio.h>

int     main()
{
        char    str[] = "Guilherme";

        ft_bzero(str, 5);
        printf("%s", str);
        return (0);
}
*/