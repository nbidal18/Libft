/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:13:57 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/14 12:04:11 by nbidal           ###   ########.fr       */
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
		while (substr[i++] != NULL)
			free(substr[i]);
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
		while (*string++ != delimiter && *string)
			len++;
		if (len)
		{
			if (safe_malloc(substr, i, len + 1) == 1)
				return (1);
		}
		ft_strlcpy(substr[i], string - len - 1, len + 1);
		i++;
	}
	return (0);
}

size_t	count_words(char const *string, char delimiter)
{
	size_t	n_words;
	int		inside_word;

	n_words = 0;
	while (*string)
	{
		inside_word = 0;
		while (*string == delimiter && *string)
			string++;
		while (*string++ != delimiter && *string)
		{
			if (inside_word == 0)
			{
				n_words++;
				inside_word = 1;
			}
		}
	}
	return (n_words);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**substr;

	if (s == NULL)
		return (NULL);
	n_words = count_words(s, c);
	substr = malloc((n_words + 1) * sizeof(char *));
	if (substr == NULL)
		return (NULL);
	substr[n_words] = NULL;
	if (fill(substr, s, c) == 1)
		return (NULL);
	return (substr);
}

/*int main()
{
	char **result = ft_split("___Hello_there,_dude!!", '_');

	while (*result)
		printf("%s\n", *result++);
}*/
