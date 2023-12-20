/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:47:08 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/20 18:32:41 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned char *d;
	const unsigned char *s;
	int i;
	int len;

	/* da capire se nel cast ci vuole sempre *,
	e soprattutto se serve il cast o no */
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	len = 0;
	while (*s != '\0')
	{
		len++;
	}
	if (dstsize > 0)
	{
		while ((*s != '\0') && (i < (dstsize - 1)))
		{
			*d = *s;
			d++;
			s++;
		}
		dst[i] = '\0';
	}
	return len;
}
