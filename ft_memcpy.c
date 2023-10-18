#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	const unsigned char	*memsrc;
	unsigned char	*memdest;

	i = 0;
	memsrc = (const unsigned char *)src;
	memdest = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dest);
}
