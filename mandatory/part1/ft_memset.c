/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:30:41 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/22 18:15:51 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
	char *p;

	p = s;
	if (n < 1)
		return 0;
	while(n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return s;
}

/*
int main()
{
    char array[20] = "Hello, World!";
    printf("Array prima: %s\n", array);
	char *result = (char *)memset(array, 'z', 3);
    printf("Array dopo: %s\n", result);
    return 0;
}
*/
