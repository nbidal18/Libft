/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:16:46 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/31 09:59:19 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dst[i] != '\0')
		dst[i] = '\0';
	return (ft_strlen(src));
}

/*
int main()
{
    char array1[20] = "Ciao!";
    char array2[20] = "Hello World!";
	printf("dst: %s\n", array2);
	size_t result = ft_strlcpy(array2, array1, 20);
    printf("Copied %zu characters, dst: %s\n", result, array2);
    return 0;
}
*/
