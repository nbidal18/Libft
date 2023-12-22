/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:04:36 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/22 17:14:53 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 126)
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
	int result = ft_isprint(c);
	printf("Result: %d\n", result);
	return 0;
}
*/
