/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 15:50:19 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 15:58:47 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_data_map.h"

int			ft_open_fd(int num_map)
{
	int		fd;

	if (num_map == 0)
		fd = open("Map/level_0", O_RDONLY);
	if (num_map == 1)
		fd = open("Map/level_1", O_RDONLY);
	return (fd);
}
