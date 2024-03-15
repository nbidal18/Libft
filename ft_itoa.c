/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 08:47:43 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/15 10:28:52 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		++count;
	while (n)
	{
		++count;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*string;

	len = ft_len(n);
	string = malloc(len + 1);
	if (string == NULL)
		return (NULL);
	string[len] = '\0';
	if (n == 0)
		*string = '0';
	else if (n < 0)
		*string = '-';
	len--;
	while (n)
	{
		if (n < 0)
			string[len--] = (~(n % 10) + 1) + 48;
		else
			string[len--] = (n % 10) + 48;
		n /= 10;
	}
	return (string);
}

/*int	main()
{
	char *result = ft_itoa(23);
	printf("%s", result);
}*/