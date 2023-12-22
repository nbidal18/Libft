/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:55:07 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/22 17:14:48 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
