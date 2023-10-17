#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t  i;
        size_t  j;
        size_t  len;
        char    *mem;

        i = 0;
        j = 0;
        str = (char *)s1;
        if (!s1 || !set)
                return (0);
        while (s1[i] && ft_strchr(set, s1[i]) != 0)
                i++;
        while (i < ft_strlen(s1) && ft_strchr(s1[ft_strlen(s1) - j - 1], set) != 0)
                j++;
        len = ft_strlen(s1) - j - i;
        mem = (char *)malloc((len + 1) * sizeof(char));
        if (!mem)
                return (0);
        ft_strlcpy(mem, s1 + 1, len);
        mem[len] = '\0';
        return (mem);
}