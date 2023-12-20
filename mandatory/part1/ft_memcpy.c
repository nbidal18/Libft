/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:59:34 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/20 15:02:42 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = dst;
	s = src;
    if ((d + n) < s || d >= s + n) {
        while (n--) {
			*d = *s;
			d++;
			s++;
        }
    } else {
        d += n;
        s += n;
        while (n--) {
            *d = *s;
			d--;
			s--;
        }
    }
    return dst;
}
