/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:01:54 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 13:12:07 by nbidal           ###   ########.fr       */
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
