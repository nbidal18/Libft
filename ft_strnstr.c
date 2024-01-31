/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:17:14 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/31 16:58:03 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

//lorem
//lorem ipsum dolor sit amet

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*start;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && (needle[i] != '\0' && haystack[j] != '\0'))
	{
		if (needle[i] == haystack[j])
		{
			start = (char *)haystack + i;
			i++;
		}
		j++;
		if (i > 0 && needle[i] != haystack[j])
		{
			i = 0;
		}
	}
	if ((size_t)ft_strlen(needle) == i)
		return (start);
	return (NULL);
}
