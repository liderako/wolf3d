/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:42:26 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/13 15:42:26 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	start_game(t_wolf *wolf)
{
	draw_skybox(wolf);
	if (wolf->num_lvl == 0)
		wolf->xpm = create_xpm(wolf->obj, "./Bin/greystone.xpm");
	else
		wolf->xpm = create_xpm(wolf->obj, "./Bin/mossy.xpm");
	wolf->ray_cast = (t_raycast*)malloc(sizeof(t_raycast) * SIZE_X + 1);
	ft_ray_cast(wolf);
	ft_fps(wolf);
	draw_wall(wolf);
	mlx_put_image_to_window(MLX_M, WIN_M, wolf->img->img, 0, 0);
	free(wolf->img);
	free(wolf->ray_cast);
	free(wolf->xpm);
	wolf->game = -2;
}
