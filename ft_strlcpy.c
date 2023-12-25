/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:16:46 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/25 14:26:57 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	strlen(const char *s, size_t *srclen)
{
	int	slen;

	slen = (int)*srclen;
	while (s[slen] != '\0')
	{
		slen++;
	}
	*srclen = (size_t)slen;
}

size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		srclen;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	srclen = 0;
	if ((*s == '\0') || (dstsize < 1))
	{
		strlen(s, &srclen);
		i = 0;
		while ((*s != '\0') && (i < (dstsize - 1)))
		{
			*d = *s;
			d++;
			s++;
			i++;
		}
		*d = '\0';
	}
	return (srclen);
}

/*
int main()
{
    char array1[20] = "Ciao!";
    char array2[20] = "Hello World!";
	printf("dst: %s\n", array2);
	size_t result = strlcpy(array2, array1, 20);
    printf("Copied %zu characters, dst: %s\n", result, array2);
    return 0;
}
*/
