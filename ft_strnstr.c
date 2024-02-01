/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:17:14 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/01 17:59:32 by nbidal           ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*start;

	i = 0;
	j = 0;
	if (len == (size_t)-1)
		len = ft_strlen(haystack);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (j < len && (needle[i] != '\0' && haystack[j] != '\0'))
	{
		if (needle[i] == haystack[j])
		{
            if (i == 0)
                start = (char *)haystack + j;
            i++;
            if (needle[i] == '\0')
                return start;
        } 
		else 
		{
            if (i > 0) {
                j = j - i;
                i = 0;
            }
            start = NULL;
        }
        j++;
	}
	if ((size_t)ft_strlen(needle) == i)
		return (start);
	return (NULL);
}

/*int main()
{
	char * big = "aaabcabcd";
	char * little = "aabc";
	size_t max = -1;
	char *result = ft_strnstr(big, little, max);
	if(result != NULL)
		printf("found, %c\n", *result);
	else if (result == NULL)
		printf("not found\n");
}*/
