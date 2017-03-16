/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 18:21:45 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/27 18:21:46 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	create_player(t_wolf *wolf, int num)
{
	int	i;

	wolf->player = (t_player*)malloc(sizeof(t_player) + 1);
	wolf->player->speed = 0;
	wolf->player->rotation = 0;
	i = 0;
	while (i < wolf->map[num].len_lvl)
	{
		if (wolf->map[num].lvl[i].obj == 'P')
		{
			wolf->player->player_x = wolf->map[num].lvl[i].x + 0.5;
			wolf->player->player_y = wolf->map[num].lvl[i].y + 0.5;
			wolf->map[num].lvl[i].obj = '0';
			break ;
		}
		i++;
	}
}
