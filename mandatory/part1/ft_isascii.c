/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:55:07 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/20 16:46:59 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
