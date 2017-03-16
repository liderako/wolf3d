/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_x_coordinate_texture.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 20:32:05 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 20:32:07 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	calculate_x_coordinate_texture(t_wolf *wolf, int x)
{
	TEX_X = (int)(WALL_X * TEX_WIDTH);
	if (SIDE == 0 && RAY_POS_X > 0)
		TEX_X = TEX_WIDTH - TEX_X - 1;
	if (SIDE == 1 && RAY_POS_Y < 0)
		TEX_X = TEX_WIDTH - TEX_X - 1;
}
