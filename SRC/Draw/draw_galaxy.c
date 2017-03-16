/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_galaxy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 16:22:25 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/23 16:22:26 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"
#include "draw.h"

void	draw_galaxy(t_wolf *wolf)
{
	wolf->img = create_img(wolf->obj);
	wolf->xpm = create_xpm(wolf->obj, "./Bin/galaxy.xpm");
	draw_background(wolf);
	free(wolf->img);
	free(wolf->xpm);
}
