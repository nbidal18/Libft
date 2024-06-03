/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:17:00 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/31 09:59:37 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	d = dst;
	s = src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}

/*
int main()
{
    char array1[20] = "Hello, World!";
    char array2[20] = "Ciao, Mondo!";
	printf("dst prima: %s\n", array2);
	char *result = ft_memcpy(array2, array1, 2);
    printf("dst dopo: %s\n", result);
    return 0;
}
*/
