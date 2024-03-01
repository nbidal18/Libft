/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:02:48 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 13:13:53 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		substr = ft_calloc(1, sizeof(char));
		if (substr == NULL)
			return (NULL);
		return (substr);
	}
	s = s + start;
	if ((size_t)ft_strlen(s) <= len)
		substr = malloc((ft_strlen(s) + 1) * sizeof(char));
	else
		substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0' && i < len)
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
