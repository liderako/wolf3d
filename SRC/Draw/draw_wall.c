/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 14:54:24 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/03 14:54:25 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void		draw_wall(t_wolf *wolf)
{
	t_var	var;
	int		x;

	x = 0;
	while (x < SIZE_X)
	{
		var.y = TOP_POINT;
		var.tmp = (var.y << 8) - (SIZE_Y << 7) + (LINE_HEIGHT << 7);
		var.y2 = ((var.tmp * 64) / LINE_HEIGHT) >> 8;
		var.y_range = (double)wolf->xpm->height / (double)LINE_HEIGHT;
		while (var.y < BOTTOM_POINT)
		{
			var.pix1 = var.y * wolf->img->size_line + (x << 2);
			var.pix2 = (int)var.y2 * wolf->xpm->size_line + ((int)TEX_X << 2);
			if (var.y > 0 && var.y < SIZE_Y)
				ft_memcpy(&LINE[var.pix1], &DATA[var.pix2], 4);
			var.y++;
			var.y2 += var.y_range;
		}
		draw_floor(wolf, x, var.y);
		x++;
	}
}
