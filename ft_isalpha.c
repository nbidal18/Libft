/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:17:08 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/24 19:17:09 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(unsigned char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	int result = ft_isalpha(c);
	printf("Result: %d\n", result);
	return 0;
}
*/
