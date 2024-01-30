/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:00:16 by nbidal            #+#    #+#             */
/*   Updated: 2024/01/30 19:35:17 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((s1[i] > s2[i]) || (s1[i] != '\0' && s2[i] == '\0'))
			return (1);
		else if ((s1[i] < s2[i]) || (s1[i] == '\0' && s2[i] != '\0'))
			return (-1);
		i++;
	}
	return (0);
}

/*int main() {
	int result = ft_strncmp("\x12\xff\x65\x12\xbd\xde\xad", "\x12\x02", 6);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("str1 is greater than str2.\n");
    } else {
        printf("str1 is less than str2.\n");
    }

    return 0;
}*/