/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fps.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:42:21 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/13 15:42:22 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	ft_fps(t_wolf *wolf)
{
	wolf->fps.old_time = TIME;
	TIME = clock();
	FRAME_TIME = (TIME - wolf->fps.old_time) / CLOCKS_PER_SEC / 2;
	P_SPEED = FRAME_TIME * 5;
	P_ROT = FRAME_TIME * 3;
}
