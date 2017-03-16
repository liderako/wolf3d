/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varible_plane_for_start_ray_cast.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 20:32:50 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 20:32:50 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	varible_plane_for_start_ray_cast(t_wolf *wolf, int x)
{
	CAMERA_X = (x << 1) / (double)SIZE_X - 1;
	RAY_POS_X = PLAYER_X;
	RAY_POS_Y = PLAYER_Y;
	RAY_DIR_X = DIR_VECTOR_X + CAM_PLANE_X * CAMERA_X;
	RAY_DIR_Y = DIR_VECTOR_Y + CAM_PLANE_Y * CAMERA_X;
	MAP_X = RAY_POS_X;
	MAP_Y = RAY_POS_Y;
}
