/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_top_and_bottom_point.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:57:59 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:58:00 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	calculate_top_and_bottom_point(t_wolf *wolf, int x)
{
	TOP_POINT = -LINE_HEIGHT / 2 + (SIZE_Y >> 1);
	BOTTOM_POINT = (LINE_HEIGHT >> 1) + (SIZE_Y >> 1);
}
