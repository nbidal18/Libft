/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:52:55 by nbidal            #+#    #+#             */
/*   Updated: 2024/03/01 16:01:45 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_specifiers(&format, args);
			format++;
		}
		else
			count += ft_putchar(*format++);
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	ft_printf("\n");
	count1 = printf("1 %p %p \n", 0, 0);
	printf("1 %d\n", count1);
	//count2 = ft_printf("2 %p %p \n", 0, 0);
	//ft_printf("2 %d\n", count2);
	ft_printf("\n");
}*/