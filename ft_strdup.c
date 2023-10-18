#include "libft.h"

char    *ft_strdup(const char *s)
{
        char    *mem;
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (s[i])
                i++;
        mem = (char *)malloc((i + 1) * sizeof(char));
        if (!mem)
                return (0);
        while (j < i)
        {
                mem[j] = s[j];
                j++;
        }
        mem[j] = '\0';
        return (mem);
}
