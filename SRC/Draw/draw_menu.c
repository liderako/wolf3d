/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_menu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 20:20:00 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/20 20:20:02 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	draw_menu(t_wolf *wolf)
{
	wolf->img = create_img(wolf->obj);
	wolf->xpm = create_xpm(wolf->obj, "./Bin/menu.xpm");
	draw_background(wolf);
	wolf->menu = 2;
	free(wolf->img);
	free(wolf->xpm);
	ft_wait(4);
}
