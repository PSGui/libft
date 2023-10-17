#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
        size_t    i;
        unsigned char *mem;
        unsigned char valor;

        i = 0;
        mem = (unsigned char *)str;
        valor = (unsigned char)c;
        while (i < n)
        {
                mem[i] = valor;
                i++;
        }
        return (str);
}

/*
#include <stddef.h>
#include <stdio.h>

int     main()
{
        char    str[] = "Guilherme";

        ft_memset(str, '0', 5); 
        printf("%s", str);
        return (0);
}
*/