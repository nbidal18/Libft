/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:19:33 by nbidal            #+#    #+#             */
/*   Updated: 2024/02/22 15:14:48 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	str[12];
	long	nbr;

	nbr = n;
	if (nbr == 0)
		write (fd, "0", 1);
	i = 0;
	if (nbr < 0)
	{
		write (fd, "-", 1);
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[i++] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	str[i + 1] = 0;
	i--;
	while (i >= 0)
		write (fd, &str[i--], 1);
}

/*int main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	int nbr = ft_atoi(argv[1]);
	ft_putnbr_fd(nbr, 1);
}*/
