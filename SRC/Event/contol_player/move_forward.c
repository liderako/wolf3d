/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_forward.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:43:24 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 19:43:24 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../head.h"

void	move_forward(t_wolf *wolf)
{
	int		y;
	int		x;

	x = PLAYER_X + DIR_VECTOR_X * P_SPEED;
	y = PLAYER_Y + DIR_VECTOR_Y * P_SPEED;
	if ((check_wall(wolf, x, (int)PLAYER_Y)) == 0)
		PLAYER_X += DIR_VECTOR_X * P_SPEED;
	if ((check_wall(wolf, (int)PLAYER_X, y)) == 0)
		PLAYER_Y += DIR_VECTOR_Y * P_SPEED;
}
