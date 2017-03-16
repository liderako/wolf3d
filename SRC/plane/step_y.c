/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_y.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:56:29 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:56:30 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	step_y(t_wolf *wolf, int x)
{
	if (RAY_DIR_Y < 0)
	{
		STEP_Y = -1;
		SIDE_DIST_Y = (RAY_POS_Y - MAP_Y) * DELTA_DIST_Y;
	}
	else
	{
		STEP_Y = 1;
		SIDE_DIST_Y = (MAP_Y + 1.0 - RAY_POS_Y) * DELTA_DIST_Y;
	}
}
