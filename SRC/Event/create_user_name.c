/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_user_name.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 17:03:05 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/23 17:03:06 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	create_user_name(t_wolf *wolf)
{
	if (wolf->create_user_name == 1)
	{
		draw_galaxy(wolf);
		mlx_string_put(MLX_M, WIN_M, 300, 157, 0xFFFF00, STRING1);
		mlx_string_put(MLX_M, WIN_M, 240, 240, 0xFFFF00, STRING2);
		mlx_string_put(MLX_M, WIN_M, 350, 240, 0xFFFF00, wolf->user_name);
		mlx_string_put(MLX_M, WIN_M, 430, 600, 0xFFFF00, USER_S3);
		wolf->create_user_name = 2;
	}
}
