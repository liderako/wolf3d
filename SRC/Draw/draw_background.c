/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_background.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 17:45:00 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/21 17:45:03 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"
#include "draw.h"

int		draw_background(t_wolf *wolf)
{
	t_var	var;

	var.y_range = (double)wolf->xpm->height / (double)SIZE_Y;
	var.x_range = (double)wolf->xpm->width / (double)SIZE_X;
	var.y = 0;
	var.y2 = 0;
	while (var.y < SIZE_Y)
	{
		var.x = 0;
		var.x2 = 0;
		while (var.x < SIZE_X)
		{
			var.pix1 = var.y * wolf->img->size_line + (var.x << 2);
			var.pix2 = (int)var.y2 * wolf->xpm->size_line + ((int)var.x2 << 2);
			if (var.pix1 < ((SIZE_Y * SIZE_X) << 2))
				ft_memcpy(&LINE[var.pix1], &DATA[var.pix2], 4);
			var.x++;
			var.x2 += var.x_range;
		}
		var.y2 += var.y_range;
		var.y++;
	}
	PUT_IMAGE(wolf->obj->mlx, wolf->obj->win, wolf->img->img, 0, 0);
	return (1);
}
