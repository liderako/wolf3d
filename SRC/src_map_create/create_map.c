/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 18:03:14 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/17 18:03:16 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_data_map.h"

t_map		*create_map(void)
{
	t_map	*map;
	int		i;
	int		fd;
	int		len;

	i = 0;
	map = (t_map*)malloc(sizeof(t_map) * (SIZE_LVL + 1));
	while (i <= SIZE_LVL)
	{
		fd = ft_open_fd(i);
		len = ft_len_lvl(fd);
		close(fd);
		map[i].len_lvl = len;
		map[i].lvl = create_lvl_map(len, i);
		map[i].size_x = map[i].lvl[len - 1].x;
		map[i].size_y = map[i].lvl[len - 1].y;
		i++;
	}
	return (map);
}
