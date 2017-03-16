/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:56:12 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:56:17 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

int		check_wall(t_wolf *wolf, int x, int y)
{
	int	i;

	i = 0;
	while (i < wolf->map[NUM_LVL].len_lvl)
	{
		if (wolf->map[NUM_LVL].lvl[i].x == x)
			if (wolf->map[NUM_LVL].lvl[i].y == y)
				if (wolf->map[NUM_LVL].lvl[i].obj != '0')
					return (1);
		i++;
	}
	return (0);
}
