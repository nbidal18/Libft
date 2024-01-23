/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nizarbidal <nizarbidal@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:58 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/23 18:57:55 by nizarbidal       ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;
	size_t	j;
	size_t	tmp;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = 0;
	j = 0;
	j = lendst;
	tmp = j;
	j = tmp++;
	if ((size > 0) && (src[i] != '\0'))
	{
		while ((i < (size - lendst - 1)) && (src[i] != '\0'))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (lensrc + (lendst));
}

/*
int main()
{
    char s[30] = "lorem ipsum dolor sit amet";
    char d[14] = "a";
	printf("Original dst: %s\n", d);
	size_t result = ft_strlcat(d, s, 15);
    printf("Tried to copy %zu characters, Modified dst: %s\n", result, d);
    return 0;
}
*/
