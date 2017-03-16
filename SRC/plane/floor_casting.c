/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_casting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:26:13 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/13 15:26:14 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	floor_casting(t_wolf *wolf, int x)
{
	if (SIDE == 0 && RAY_DIR_X > 0)
	{
		FLOOR_X_WALL = MAP_X;
		FLOOR_Y_WALL = MAP_Y + WALL_X;
	}
	else if (SIDE == 0 && RAY_DIR_X < 0)
	{
		FLOOR_X_WALL = MAP_X + 1.0;
		FLOOR_Y_WALL = MAP_Y + WALL_X;
	}
	else if (SIDE == 1 && RAY_DIR_Y > 0)
	{
		FLOOR_X_WALL = MAP_X + WALL_X;
		FLOOR_Y_WALL = MAP_Y;
	}
	else
	{
		FLOOR_X_WALL = MAP_X + WALL_X;
		FLOOR_Y_WALL = MAP_Y + 1.0;
	}
}
