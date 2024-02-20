/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:19:33 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/20 10:43:06 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*converted_n;
	int		len;

	if (!(fd < 0))
	{
		converted_n = ft_itoa(n);
		len = ft_strlen(converted_n);
		while (len-- > 0 && *converted_n != '\0')
		{
			write(fd, converted_n, 1);
			converted_n++;
		}
	}
}
