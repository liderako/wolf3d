/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm_dda.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:57:20 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:57:21 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	algoritm_dda(t_wolf *wolf, int x)
{
	while (1)
	{
		if (SIDE_DIST_X < SIDE_DIST_Y)
		{
			SIDE_DIST_X += DELTA_DIST_X;
			MAP_X += STEP_X;
			SIDE = 0;
		}
		else
		{
			SIDE_DIST_Y += DELTA_DIST_Y;
			MAP_Y += STEP_Y;
			SIDE = 1;
		}
		if ((check_wall(wolf, MAP_X, MAP_Y)) == 1)
			break ;
	}
}
