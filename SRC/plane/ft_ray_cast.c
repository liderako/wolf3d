/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_cast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:56:54 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/07 21:56:55 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	ft_ray_cast(t_wolf *wolf)
{
	int		x;

	x = 0;
	while (x < SIZE_X)
	{
		varible_plane_for_start_ray_cast(wolf, x);
		lenght_of_ray(wolf, x);
		step_x(wolf, x);
		step_y(wolf, x);
		algoritm_dda(wolf, x);
		calculate_dist_project_camera_dir(wolf, x);
		calculate_height_line(wolf, x);
		calculate_top_and_bottom_point(wolf, x);
		calculate_value_wall_x(wolf, x);
		calculate_x_coordinate_texture(wolf, x);
		floor_casting(wolf, x);
		x++;
	}
}
