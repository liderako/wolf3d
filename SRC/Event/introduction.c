/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   introduction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 17:13:09 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/23 17:13:10 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	root_introduction(t_wolf *wolf)
{
	if (wolf->introduction == 1)
	{
		draw_galaxy(wolf);
		mlx_string_put(MLX_M, WIN_M, 430, 157, 0xFFFF00, ROOT_S1);
		wolf->introduction = 2;
		ft_wait(2);
	}
	else
	{
		draw_galaxy(wolf);
		mlx_string_put(MLX_M, WIN_M, 430, 157, 0xFFFF00, ROOT_S1);
		mlx_string_put(MLX_M, WIN_M, 430, 280, 0xFFFF00, USER_S3);
		wolf->introduction = 1;
		ft_wait(2);
	}
}

void	user_introduction(t_wolf *wolf)
{
	if (wolf->introduction == 1)
	{
		draw_galaxy(wolf);
		mlx_string_put(MLX_M, WIN_M, 250, 157, 0xFFFF00, USER_S1);
		mlx_string_put(MLX_M, WIN_M, 320, 157, 0xFFFF00, wolf->user_name);
		mlx_string_put(MLX_M, WIN_M, 250, 200, 0xFFFF00, USER_S2);
		wolf->introduction = 2;
		ft_wait(2);
	}
	else
	{
		draw_galaxy(wolf);
		mlx_string_put(MLX_M, WIN_M, 250, 157, 0xFFFF00, USER_S1);
		mlx_string_put(MLX_M, WIN_M, 320, 157, 0xFFFF00, wolf->user_name);
		mlx_string_put(MLX_M, WIN_M, 250, 200, 0xFFFF00, USER_S2);
		mlx_string_put(MLX_M, WIN_M, 430, 600, 0xFFFF00, USER_S3);
		wolf->introduction = 1;
		ft_wait(2);
	}
}

void	introduction(t_wolf *wolf)
{
	wolf->create_user_name = -1;
	wolf->game = 1;
	if ((ft_strcmp(wolf->user_name, "asvirido")) == 0)
		wolf->root = 1;
	if (wolf->root == 1)
	{
		wolf->num_lvl = 1;
		root_introduction(wolf);
	}
	else
		user_introduction(wolf);
}
