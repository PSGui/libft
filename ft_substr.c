#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *mem;
        size_t  i;

        i = 0;
        if (!s)
                return (0);
        mem = (char *)malloc((len + 1) * sizeof(char));
        if (!mem)
                return (0);
        while (i < len && s[start] != '\0')
        {
                mem[start] = s[i];
                i++;
                start++;
        }
        mem[i] = '\0';
        return (mem);
}