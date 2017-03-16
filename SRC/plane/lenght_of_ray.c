/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenght_of_ray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:56:42 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:56:42 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	lenght_of_ray(t_wolf *wolf, int x)
{
	DELTA_DIST_X = sqrt(1 + (RAY_DIR_Y * RAY_DIR_Y) / (RAY_DIR_X * RAY_DIR_X));
	DELTA_DIST_Y = sqrt(1 + (RAY_DIR_X * RAY_DIR_X) / (RAY_DIR_Y * RAY_DIR_Y));
}
