/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:58:36 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/30 16:46:02 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*/

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
