/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_mouse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 15:15:21 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/20 15:15:22 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

int		event_mouse(int keycode, int x, int y, t_wolf *wolf)
{
	if (((x >= 37 && x <= 150) && (y >= 830 && y <= 880)) && wolf->menu == 2)
		exit(1);
	if ((x >= 40 && x <= 300) && (y >= 110 && y <= 160))
		if (wolf->user_name == NULL)
		{
			wolf->user_name = (char*)malloc(sizeof(char) * 17);
			ft_bzero(wolf->user_name, 17);
			wolf->create_user_name = 1;
		}
	keycode = 1;
	return (keycode);
}
