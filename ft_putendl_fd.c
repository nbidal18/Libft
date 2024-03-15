/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:05:21 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/22 15:36:01 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;
	int	newline;

	if (!(fd <= 0))
	{
		len = ft_strlen(s);
		newline = '\n';
		while (len-- > 0 && *s != '\0')
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &newline, 1);
	}
}
