/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wait.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 20:12:43 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/20 20:12:44 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_wait(int size)
{
	int				i;
	char			c;
	char			*s2;
	long int		ttime;

	c = 'a';
	i = 0;
	if (size == 0)
		return ;
	while (1)
	{
		ttime = time(NULL);
		s2 = ctime(&ttime);
		if (c != s2[18])
		{
			c = s2[18];
			i++;
		}
		if (i == size)
			break ;
	}
}
