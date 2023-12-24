/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:16:38 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/24 19:16:39 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft
#define libft

#include <stddef.h>

int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);
int	ft_strlen(const char *s);
void *memset(void *s, int c, size_t n);
void bzero(void *s, size_t n);
void *memcpy(void *restrict dst, const void *restrict src, size_t n);
size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

#endif
