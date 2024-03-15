/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:19:46 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/15 08:43:58 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		end--;
	if (start > end)
		return (ft_strdup(""));
	len = (end - start) + 2;
	trimmed = malloc(len);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len);
	return (trimmed);
}

/*int main()
{
	char *result = ft_strtrim(" lorem ipsum dolor sit amet", "l ");
	printf("result: %s", result);
}*/