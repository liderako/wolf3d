/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_value_wall_x.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 20:32:19 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 20:32:22 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	calculate_value_wall_x(t_wolf *wolf, int x)
{
	if (SIDE == 0)
		WALL_X = RAY_POS_Y + PERP_WALL_DIST * RAY_DIR_Y;
	else
		WALL_X = RAY_POS_X + PERP_WALL_DIST * RAY_DIR_X;
	WALL_X -= floor(WALL_X);
}
