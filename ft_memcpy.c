/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:17:00 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/25 14:26:23 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	overlapno(char *d, const char *s, size_t n)
{
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
}

static void	overlapyes(char *d, const char *s, size_t n)
{
	d += n;
	s += n;
	while (n--)
	{
		*d = *s;
		d--;
		s--;
	}
}

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if ((d + n) < s || d >= s + n)
	{
		overlapno(d, s, n);
	}
	else
	{
		overlapyes(d, s, n);
	}
	return (dst);
}

/*
int main()
{
    char array1[20] = "Hello, World!";
    char array2[20] = "Ciao, Mondo!";
	printf("dst prima: %s\n", array2);
	char *result = memcpy(array2, array1, 2);
    printf("dst dopo: %s\n", result);
    return 0;
}
*/
