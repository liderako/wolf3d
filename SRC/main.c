/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 17:28:49 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/19 20:07:32 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		main(void)
{
	t_wolf	*wolf;

	wolf = (t_wolf*)malloc(sizeof(t_wolf));
	wolf->user_name = NULL;
	wolf->map = create_map();
	wolf->obj = object_mlx();
	wolf->menu = 1;
	wolf->log = 1;
	wolf->num_lvl = 0;
	TIME = 0;
	create_plane(wolf);
	mlx_key_hook(WIN_M, event_key, wolf);
	mlx_mouse_hook(WIN_M, event_mouse, wolf);
	mlx_hook(WIN_M, 17, 0, destroy, wolf);
	mlx_hook(WIN_M, 2, 5, event_key_player, wolf);
	mlx_loop_hook(MLX_M, update, wolf);
	mlx_loop(MLX_M);
	return (0);
}
