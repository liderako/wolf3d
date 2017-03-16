/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 17:12:25 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/19 17:12:27 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

t_xpm	*create_xpm(t_mlx *obj, char *file)
{
	t_xpm	*new;

	new = (t_xpm*)malloc(sizeof(t_xpm));
	new->width = 0;
	new->height = 0;
	new->bits = 0;
	new->size_line = 0;
	new->end = 0;
	new->xpm = MLX_XPM_FILE(obj->mlx, file, &new->width, &new->height);
	new->data = CREATE_IMAGE(new->xpm, &new->bits, &new->size_line, &new->end);
	return (new);
}
