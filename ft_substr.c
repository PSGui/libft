#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *mem;
    size_t i;

    i = 0;
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s) || len == 0){
        mem = (char *)malloc(1 * sizeof(char));
        if (!mem)
            return (NULL);
        mem[0] = '\0';
        return (mem);
    }
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    mem = (char *)malloc((len + 1) * sizeof(char));
    if (!mem)
        return (NULL);
    while (i < len && s[start] != '\0'){
        mem[i] = s[start];
        i++;
        start++;
    }
    mem[i] = '\0';
    return (mem);
}