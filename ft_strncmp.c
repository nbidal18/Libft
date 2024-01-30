/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:00:16 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/30 18:54:14 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] > s2[i]) || (s1[i] != '\0' && s2[i] == '\0'))
			return (1);
		if ((s1[i] < s2[i]) || (s1[i] == '\0' && s2[i] != '\0'))
			return (-1);
		i++;
	}
	return (0);
}

/*int main() {
	int result = ft_strncmp("test\200", "test\0", 6);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("str1 is greater than str2.\n");
    } else {
        printf("str1 is less than str2.\n");
    }

    return 0;
}*/