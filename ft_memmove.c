/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:16:57 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/25 14:38:23 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		tmp;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	while ((i < len) && (s[i] != '\0') && (d[i] != '\0'))
	{
		tmp = s[i];
		d[i] = tmp;
		i++;
	}
	return (dst);
}

/*
int main()
{
    char array1[20] = "Hello, World!";
    char array2[20] = "Ciao, Mondo!";
	printf("dst prima: %s\n", array2);
	char *result = ft_memmove(array2, array1, 2);
    printf("dst dopo: %s\n", result);
    return 0;
}
*/
