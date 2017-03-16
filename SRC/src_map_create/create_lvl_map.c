/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lvl_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 15:51:34 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 15:51:35 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_data_map.h"

t_lvl		*create_lvl_map(int len, int num_map)
{
	t_lvl	*lvl;
	int		fd;

	fd = ft_open_fd(num_map);
	lvl = (t_lvl*)malloc(sizeof(t_lvl) * len + 1);
	lvl = read_map(lvl, fd);
	close(fd);
	return (lvl);
}
