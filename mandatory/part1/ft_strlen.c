/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:07:45 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/22 17:14:31 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

/*
int main()
{
	char array[20] = "hello";
	int result = ft_strlen(array);
	printf("Lenght: %d\n", result);
	return 0;
}
*/
