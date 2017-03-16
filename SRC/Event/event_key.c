/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 17:30:27 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 17:30:29 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

int		event_key(int keycode, t_wolf *wolf)
{
	int		len;

	len = 0;
	if (keycode == 53)
		exit(1);
	if (wolf->game == -2)
		return (1);
	if (keycode == 36 && wolf->game == 1)
	{
		wolf->introduction = -1;
		wolf->game = 2;
		if (wolf->num_lvl >= 0 && wolf->num_lvl <= 9)
			create_player(wolf, wolf->num_lvl);
	}
	if (wolf->user_name)
		if ((len = ft_strlen(wolf->user_name)) >= 6
			&& wolf->create_user_name == 2 && keycode == 36)
		{
			introduction(wolf);
			wolf->introduction = 1;
			ft_wait(1);
		}
	if (wolf->create_user_name == 2)
		fill_char_user_name(keycode, wolf);
	return (1);
}
