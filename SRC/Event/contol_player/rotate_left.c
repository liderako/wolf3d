/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:43:04 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 19:43:05 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../head.h"

void	rotate_left(t_wolf *wolf)
{
	double	old_dir_x;
	double	old_plane_x;

	old_dir_x = DIR_VECTOR_X;
	old_plane_x = CAM_PLANE_X;
	DIR_VECTOR_X = DIR_VECTOR_X * cos(P_ROT) - DIR_VECTOR_Y * sin(P_ROT);
	DIR_VECTOR_Y = old_dir_x * sin(P_ROT) + DIR_VECTOR_Y * cos(P_ROT);
	CAM_PLANE_X = CAM_PLANE_X * cos(P_ROT) - CAM_PLANE_Y * sin(P_ROT);
	CAM_PLANE_Y = old_plane_x * sin(P_ROT) + CAM_PLANE_Y * cos(P_ROT);
}
