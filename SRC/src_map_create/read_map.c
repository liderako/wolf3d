/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 15:15:40 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 15:15:42 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_data_map.h"

t_lvl		*read_map(t_lvl *lvl, int fd)
{
	int		res;
	int		i;
	char	buff[1];
	int		y;
	int		x;

	y = 0;
	x = 0;
	i = 0;
	while ((res = read(fd, buff, 1)) > 0)
	{
		if (buff[0] != '\n')
		{
			lvl[i].y = y;
			lvl[i].x = x;
			lvl[i].obj = buff[0];
			i++;
			x++;
		}
		if (buff[0] == '\n')
			y++;
		if (buff[0] == '\n')
			x = 0;
	}
	return (lvl);
}
