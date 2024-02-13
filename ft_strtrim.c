/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:19:46 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/13 14:25:09 by nbidal           ###   ########.fr       */
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
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		len++;
		if (check(s1[i], set) == 1)
			len--;
		i++;
	}
	i = 0;
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		if (check(*s1, set) == 0)
		{
			result[i] = *s1;
			i++;
		}
		s1++;
	}
	result[i] = '\0';
	return (result);
}

/*int main()
{
	char *result = ft_strtrim(" lorem ipsum dolor sit amet", "l ");
	printf("result: %s", result);
}*/