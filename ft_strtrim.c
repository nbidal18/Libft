/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:19:46 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/12 16:17:19 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.*/

int	check(char *c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (*c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		len++;
		if (check((char *)&s1[i], (char *)set) == 1)
			len--;
	}
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		if (check((char *)&s1[i], (char *)set) == 0)
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}
