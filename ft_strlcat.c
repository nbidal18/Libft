/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:58 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/29 13:58:18 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	lendst;
	int	lensrc;
	int	i;
	int	j;
	int	limit;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = lendst;
	limit = dstsize - lendst - 1;
	if (dstsize <= 0)
		return (lensrc);
	if (!(limit < 1))
	{
		while (src[i] && (i < limit))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if ((i < lensrc) && !(((int)dstsize > lendst)))
		return (lensrc + dstsize);
	return (lendst + lensrc);
}

/*
int main()
{
	char dst[10] = "a";
	printf("Original dst: %s\n", dst);
	size_t result = ft_strlcat(dst, "lorem ipsum dolor sit amet", 15);
	printf("Tried to copy %zu characters, Modified dst: %s\n", result, dst);
}
*/