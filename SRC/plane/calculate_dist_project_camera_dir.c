/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_dist_project_camera_dir.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:57:34 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:57:35 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	calculate_dist_project_camera_dir(t_wolf *wolf, int x)
{
	if (SIDE == 0)
		PERP_WALL_DIST = (MAP_X - RAY_POS_X + (1 - STEP_X) / 2) / RAY_DIR_X;
	else
		PERP_WALL_DIST = (MAP_Y - RAY_POS_Y + (1 - STEP_Y) / 2) / RAY_DIR_Y;
}
