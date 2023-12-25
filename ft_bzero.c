/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:17:13 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/25 14:37:55 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*t;

	t = (char *)s;
	while (n--)
	{
		*t = 0;
		t++;
	}
}

/*
int main()
{
    char array[20] = "Hello, World!";
    printf("Array prima: %s\n", array);
	ft_bzero(array, 3);
    printf("Array dopo: %s\n", array);
    return 0;
}
*/
