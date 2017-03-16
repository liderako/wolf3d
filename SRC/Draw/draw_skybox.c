/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_skybox.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 18:19:00 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/27 18:19:00 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	draw_skybox(t_wolf *wolf)
{
	wolf->img = create_img(wolf->obj);
	wolf->xpm = create_xpm(wolf->obj, "./Bin/sky.xpm");
	draw_background(wolf);
	free(wolf->xpm);
}
