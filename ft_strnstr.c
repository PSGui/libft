#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        const char *b;
        const char *l;
   
        if (!*little)
                return (char *)big;
        while (*big && len)
        {
                b = big;
                l = little;
                while (*b && *l && *b == *l)
                {
                        b++;
                        l++;
                }
                if (!*l)
                        return ((char *)big);
                big++;
                len--;
        }
        return (0);
}

/*
#include <stdio.h>
int     main()
{
        const char big[] = "Guilherme Braga string";
        const char little[] = "string";

        printf("%s", ft_strnstr(big, little, 25));
        return (0);
}
*/