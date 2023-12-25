/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:17:06 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/24 19:17:07 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(unsigned char c)
{
	if (c >= 0 && c <= 127)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*
int main()
{
	char c = 'h';
	int result = ft_isascii(c);
	printf("Result: %d\n", result);
	return 0;
}
*/
