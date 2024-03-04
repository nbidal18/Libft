/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:51:06 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 16:01:58 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	char	*symbols;
	int		base;

	count = 0;
	symbols = "0123456789";
	base = 10;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n < base)
		count += ft_putchar(symbols[n]);
	if (n >= base)
	{
		count += ft_putnbr(n / base);
		count += ft_putchar(symbols[n % base]);
	}
	return (count);
}
