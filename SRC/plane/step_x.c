/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:56:26 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:56:26 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	step_x(t_wolf *wolf, int x)
{
	if (RAY_DIR_X < 0)
	{
		STEP_X = -1;
		SIDE_DIST_X = (RAY_POS_X - MAP_X) * DELTA_DIST_X;
	}
	else
	{
		STEP_X = 1;
		SIDE_DIST_X = (MAP_X + 1.0 - RAY_POS_X) * DELTA_DIST_X;
	}
}
