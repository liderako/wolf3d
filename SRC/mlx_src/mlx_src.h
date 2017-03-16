/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_src.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 16:37:35 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 16:38:21 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_SRC_H
# define MLX_SRC_H
# define CREATE_IMAGE mlx_get_data_addr
# define MLX_XPM_FILE mlx_xpm_file_to_image
# define PUT_IMAGE mlx_put_image_to_window
# define MLX_M wolf->obj->mlx
# define WIN_M wolf->obj->win
# define SIZE_Y 1024
# define SIZE_X	1280
# include <mlx.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
}				t_mlx;

typedef struct	s_img
{
	int		bits;
	int		size_line;
	int		end;
	char	*line;
	void	*img;
}				t_img;

typedef struct	s_xpm
{
	int		width;
	int		height;
	int		bits;
	int		size_line;
	int		end;
	char	*data;
	void	*xpm;
}				t_xpm;

t_mlx			*object_mlx(void);
t_img			*create_img(t_mlx *obj);
t_xpm			*create_xpm(t_mlx *obj, char *file);

#endif
