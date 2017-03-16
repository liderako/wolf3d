/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 15:00:11 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/20 15:00:14 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_H
# define DRAW_H

# define LINE wolf->img->line
# define DATA wolf->xpm->data

typedef	struct	s_var
{
	int		x;
	int		y;
	int		tmp;
	int		pix1;
	int		pix2;
	double	y_range;
	double	x_range;
	double	x2;
	double	y2;
}				t_var;

#endif
