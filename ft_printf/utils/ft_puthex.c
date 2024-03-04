/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:19:14 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 16:01:53 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex(unsigned long int n)
{
	int					count;
	char				*symbols;
	unsigned int		base;

	count = 0;
	symbols = "0123456789abcdef";
	base = 16;
	if (n < base)
		count += ft_putchar(symbols[n]);
	if (n >= base)
	{
		count += ft_puthex(n / base);
		count += ft_putchar(symbols[n % base]);
	}
	return (count);
}
