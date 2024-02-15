/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:13:57 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/15 07:47:35 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_malloc(char **substr, int position, size_t len)
{
	int	i;

	i = 0;
	substr[position] = malloc(len);
	if (substr[position] == NULL)
	{
		while (substr[i] != NULL)
			free(substr[i++]);
		free(substr);
		return (1);
	}
	return (0);
}

int	fill(char **substr, char const *string, char delimiter)
{
	size_t	len;
	int		i;

	i = 0;
	while (*string)
	{
		len = 0;
		while (*string == delimiter && *string)
			string++;
		while (*string != delimiter && *string)
		{
			len++;
			string++;
		}
		if (len)
		{
			if (safe_malloc(substr, i, len + 1))
				return (1);
			ft_strlcpy(substr[i], string - len, len + 1);
		}
		i++;
	}
	return (0);
}

size_t	count_n_substr(char const *string, char delimiter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*string)
	{
		inside_token = 0;
		while (*string == delimiter && *string)
			string++;
		while (*string != delimiter && *string)
		{
			if (!inside_token)
			{
				tokens++;
				inside_token = 1;
			}
			string++;
		}
	}
	return (tokens);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_substr;
	char	**substr_v;

	if (s == NULL)
		return (NULL);
	n_substr = 0;
	n_substr = count_n_substr(s, c);
	substr_v = malloc((n_substr + 1) * sizeof(char *));
	if (substr_v == NULL)
		return (NULL);
	substr_v[n_substr] = NULL;
	if (fill(substr_v, s, c))
		return (NULL);
	return (substr_v);
}

/*int main()
{
	char **result = ft_split("___Hello_there,_dude!!", '_');

	while (*result)
		printf("%s\n", *result++);
}*/
