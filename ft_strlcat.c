/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:58 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/31 09:59:16 by nbidal           ###   ########.fr       */
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

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = lendst;
	if (dstsize == 0)
		return (lensrc);
	if ((int)dstsize < 0)
		dstsize = (size_t)lensrc + (size_t)lendst + 1;
	while ((src[i] && (i < (int)dstsize - (int)lendst - 1)))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if ((i < lensrc) && !((int)dstsize > lendst) && ((int)dstsize > 0))
		return (lensrc + dstsize);
	return (lendst + lensrc);
}

/*
int main()
{
	char dst[30] = "CCCCC";
	printf("Original dst: %s\n", dst);
	size_t result = ft_strlcat(dst, "AAAAAAAAA", -1);
	printf("Tried to copy %zu characters, Modified dst: %s\n", result, dst);
}
*/