/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:36:15 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/22 18:15:35 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

void bzero(void *s, size_t n)
{
	char *t;

	t = (char *)s;
	if (n < 1)
		return 0;
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
	bzero(array, 3);
    printf("Array dopo: %s\n", array);
    return 0;
}
*/
