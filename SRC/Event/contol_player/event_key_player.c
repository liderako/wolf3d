/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 19:42:18 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 20:23:30 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../head.h"

int		event_key_player(int keycode, t_wolf *wolf)
{
	if (wolf->game == -2)
	{
		if (keycode == 126)
			move_forward(wolf);
		if (keycode == 125)
			move_back(wolf);
		if (keycode == 124)
			rotate_right(wolf);
		if (keycode == 123)
			rotate_left(wolf);
		wolf->game = 2;
	}
	return (1);
}
