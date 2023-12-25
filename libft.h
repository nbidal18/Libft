/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:16:38 by nbidal            #+#    #+#             */
/*   Updated: 2023/12/25 14:28:18 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isalnum(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isprint(unsigned char c);
int		ft_strlen(const char *s);
void	*memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memcpy(void *dst, const void *src, size_t n);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);

#endif
