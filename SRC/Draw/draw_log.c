/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_log.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 20:20:06 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/20 20:20:06 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	draw_log(t_wolf *wolf)
{
	wolf->img = create_img(wolf->obj);
	wolf->xpm = create_xpm(wolf->obj, "./Bin/log.xpm");
	wolf->menu = draw_background(wolf);
	free(wolf->img);
	free(wolf->xpm);
	wolf->log = -1;
}
