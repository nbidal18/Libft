/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:17:14 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/01 18:41:57 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (len)
		return (0);
}

/*int main()
{
	char * big = "aaaabcabcd";
	char * little = "aaabc";
	size_t max = -1;
	char *result = ft_strnstr(big, little, max);
	if(result != NULL)
		printf("found, %c\n", *result);
	else if (result == NULL)
		printf("not found\n");
}*/