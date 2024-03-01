/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:17:00 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 13:12:18 by nbidal           ###   ########.fr       */
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
