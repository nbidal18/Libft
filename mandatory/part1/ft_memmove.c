/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:53:47 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/20 18:33:21 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;
	unsigned char t[len];
	int i;

	d = dst;
	s = src;
	i = 0;
	//while(len--) - not good bcs changes len and second loop is affected
	while(i < len)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while(i < len)
	{
		d[i] = t[i];
		i++;
	}
	return dst;
}
