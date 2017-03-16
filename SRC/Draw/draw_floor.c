/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_floor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:34:34 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/13 15:34:35 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	draw_floor(t_wolf *wolf, int x, int y)
{
	t_var		var;

	if (y < 0)
		y = SIZE_Y;
	DIST_WALL = PERP_WALL_DIST;
	while (y < SIZE_Y)
	{
		CURRENT_DIST = SIZE_Y / (2.0 * y - SIZE_Y);
		WEIGHT = CURRENT_DIST / DIST_WALL;
		CURRENT_FLOOR_X = WEIGHT * FLOOR_X_WALL + (1.0 - WEIGHT) * PLAYER_X;
		CURRENT_FLOOR_Y = WEIGHT * FLOOR_Y_WALL + (1.0 - WEIGHT) * PLAYER_Y;
		FLOOR_X = (int)(CURRENT_FLOOR_X * 64) % 64;
		FLOOR_Y = (int)(CURRENT_FLOOR_Y * 64) % 64;
		var.pix1 = y * wolf->img->size_line + (x << 2);
		var.pix2 = (int)FLOOR_Y * wolf->xpm->size_line + ((int)FLOOR_X << 2);
		ft_memcpy(&LINE[var.pix1], &DATA[var.pix2], 4);
		y++;
	}
}
