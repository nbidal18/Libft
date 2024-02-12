/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:19:46 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/12 16:40:21 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/

int	check(char c, const char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		len++;
		if (check(*s1, set) == 1)
			len--;
	}
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		if (check(*s1, set) == 0)
		{
			*result = *s1;
			result++;
		}
		s1++;
	}
	*result = '\0';
	return (result);
}
