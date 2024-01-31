/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:16:55 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/31 09:59:42 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = s;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (s);
}

/*
int main()
{
    char array[20] = "Hello, World!";
    printf("Array prima: %s\n", array);
	char *result = (char *)ft_memset(array, 'z', 3);
    printf("Array dopo: %s\n", result);
    return 0;
}
*/
