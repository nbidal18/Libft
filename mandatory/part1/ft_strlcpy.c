/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:47:08 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/22 18:19:56 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    char *d;
	const char *s;
	size_t srclen;
	int i;

	d = dst;
	s = src;
	i = 0;
	srclen = 0;
	if ((*s == '\0') || (dstsize < 1))
		return 0;
	while (s[i] != '\0')
	{
		srclen++;
		i++;
	}
	i = 0;
	while((*s != '\0') && (i < (dstsize - 1)))
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	*d = '\0';
	return srclen;
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
