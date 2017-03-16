/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 13:56:10 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/19 13:56:54 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <time.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_wait(int size);
int		ft_strlen(char *s);
void	ft_bzero(char *s, int len);
int		ft_strcmp(const char *s1, const char *s2);

#endif
