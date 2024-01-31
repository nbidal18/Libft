/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:14:14 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/31 09:59:02 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp;
	char	*pos;

	pos = (char *)s;
	tmp = (char)c;
	while (*pos != '\0')
	{
		if (*pos == tmp)
			return (pos);
		pos++;
	}
	if (tmp == '\0')
		return (pos);
	return (NULL);
}
