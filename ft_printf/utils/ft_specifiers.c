/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:22:31 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 16:02:06 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_specifiers(const char **format, va_list args)
{
	int	count;

	count = 0;
	if (**format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (**format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (**format == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (**format == 'd' || **format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (**format == 'u')
		count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (**format == 'x')
		count += ft_puthex(va_arg(args, unsigned int));
	else if (**format == 'X')
		count += ft_puthex_up(va_arg(args, unsigned int));
	else if (**format == '%')
		count += ft_putchar('%');
	return (count);
}
