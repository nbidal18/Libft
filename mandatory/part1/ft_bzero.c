/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:36:15 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/19 21:43:22 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t i;

	p = s;
	i = 0;

	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
