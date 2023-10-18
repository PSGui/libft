#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return (0);
	ft_bzero(mem, nmemb * size);
	if (!mem)
		return (0);
	return (mem);
}
