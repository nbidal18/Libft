/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:30:02 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/13 14:30:03 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		substr;
	int		i;
	int		j;

	i = 0;
	substr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			substr++;
	}
	newstr = (char **)malloc((substr + 1) * sizeof(char *));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < (substr + 1))
		newstr[i] = malloc((ft_strlen(s) + 1) * sizeof(char));
	j = 0;
	while (*s != '\0')
	{
		if (*s == c)
        {
            newstr[i][j] = '\0';
            i++;
            j = 0;
        }
        else
        {
            newstr[i][j] = *s;
            j++;
        }
        s++;
	}
	newstr[i][j] = '\0';
	newstr[i + 1] = NULL;
	return (newstr);
}

/*int main()
{
	char **result = ft_split("mondo", 'n');
}*/
