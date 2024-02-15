/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:58:36 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/15 09:10:22 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*ss;
	int		lens;

	lens = ft_strlen(s);
	ss = (char *)s + lens;
	cc = (char)c;
	while (lens > 0)
	{
		if (*ss != cc)
		{
			ss--;
			lens--;
		}
		if (*ss == cc)
			return (ss);
	}
	if (cc == '\0')
		return (ss);
	return (NULL);
}
