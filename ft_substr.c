/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:02:48 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/12 15:12:34 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	lens;

	i = -1;
	lens = ft_strlen(s);
	if (start > (unsigned int)ft_strlen(s))
	{
		substr = malloc(1 * sizeof(char));
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	s = s + start;
	if (lens <= len)
		substr = malloc((ft_strlen(s) + 1) * sizeof(char));
	else
		substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[++i] != '\0' && i < len)
		substr[i] = s[i];
	substr[i] = '\0';
	return (substr);
}
