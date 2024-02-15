/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:01:54 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/15 09:07:08 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	c = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (s2[i] == c || (c == '\0' && s2[i] == '\0'))
			return (s2 + i);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	const void	*result = ft_memchr(s, 2, 3);
	if (result != NULL)
		printf("found");
	else
		printf("not found");
}*/