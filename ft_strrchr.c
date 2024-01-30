/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:58:36 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/30 16:07:16 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp;
	char	*pos;

	pos = (char *)s;
	tmp = (char)c;
	while (*pos != '\0')
	{
		if (*pos != tmp)
			pos++;
		if (*pos == tmp)
			return (pos);
	}
	if (tmp == '\0')
		return (pos);
	return (NULL);
}
