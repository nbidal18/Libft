/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:58 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/27 10:15:06 by nbidal           ###   ########.fr       */
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
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = lendst;
	if (!(dstsize < 1))
	{
		while (src[i] && (i < (dstsize - lendst - 1)))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (lendst + lensrc);
}

/*
int main()
{
	char src[7] = "mondo";
	char dst[10] = "ciao";
	printf("Original dst: %s\n", dst);
	size_t result = ft_strlcat(dst, src, 10);
	printf("Tried to copy %zu characters, Modified dst: %s\n", result, dst);
}
*/