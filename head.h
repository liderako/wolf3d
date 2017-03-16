/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:00:34 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 20:21:51 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include "SRC/src_map_create/create_data_map.h"
# include "SRC/mlx_src/mlx_src.h"
# include "SRC/libft_src/libft.h"
# include "SRC/Draw/draw.h"
# define STRING1 "Hello! Please enter your name 6-16 characters"
# define STRING2 "Name:"
# define ROOT_S1 "Hello sir good luck"
# define USER_S1 "Hello:"
# define USER_S2 "This is a demo version of the game wolf3d. Good luck"
# define USER_S3 "Press enter to start"
# define RAD (3.14 / 180)
# define CENTRE_PP_Y 512
# define CENTRE_PP_X 640
# define TEX_WIDTH 64
# define TEX_HEIGHT 64
# define PLAYER_X wolf->player->player_x
# define PLAYER_Y wolf->player->player_y
# define P_SPEED wolf->player->speed
# define P_ROT wolf->player->rotation
# define RAY_POS_X wolf->ray_cast[x].ray_pos_x
# define RAY_POS_Y wolf->ray_cast[x].ray_pos_y
# define RAY_DIR_X wolf->ray_cast[x].ray_dir_x
# define RAY_DIR_Y wolf->ray_cast[x].ray_dir_y
# define CAMERA_X wolf->ray_cast[x].camera_x
# define DIR_VECTOR_X wolf->plane.direction_vector_x
# define DIR_VECTOR_Y wolf->plane.direction_vector_y
# define CAM_PLANE_X wolf->plane.camera_plane_x
# define CAM_PLANE_Y wolf->plane.camera_plane_y
# define DELTA_DIST_X wolf->ray_cast[x].delta_dist_x
# define DELTA_DIST_Y wolf->ray_cast[x].delta_dist_y
# define STEP_X wolf->ray_cast[x].step_x
# define STEP_Y wolf->ray_cast[x].step_y
# define SIDE_DIST_X wolf->ray_cast[x].side_dist_x
# define SIDE_DIST_Y wolf->ray_cast[x].side_dist_y
# define MAP_X wolf->ray_cast[x].map_x
# define MAP_Y wolf->ray_cast[x].map_y
# define SIDE wolf->ray_cast[x].side
# define PERP_WALL_DIST wolf->ray_cast[x].perp_wall_dist
# define TOP_POINT wolf->ray_cast[x].top_point
# define BOTTOM_POINT wolf->ray_cast[x].bottom_point
# define LINE_HEIGHT wolf->ray_cast[x].line_height
# define WALL_X wolf->ray_cast[x].wall_x
# define TEX_X wolf->ray_cast[x].tex_x
# define TEX_Y wolf->ray_cast[x].tex_y
# define NUM_LVL wolf->num_lvl
# define FRAME_TIME wolf->fps.frame_time
# define TIME wolf->fps.time
# define FLOOR_X_WALL wolf->ray_cast[x].floor.floor_x_wall
# define FLOOR_Y_WALL wolf->ray_cast[x].floor.floor_y_wall
# define DIST_WALL wolf->ray_cast[x].floor.dist_wall
# define CURRENT_DIST wolf->ray_cast[x].floor.current_dist
# define WEIGHT wolf->ray_cast[x].floor.weight
# define CURRENT_FLOOR_X wolf->ray_cast[x].floor.current_floor_x
# define CURRENT_FLOOR_Y wolf->ray_cast[x].floor.current_floor_y
# define FLOOR_X wolf->ray_cast[x].floor.floor_x
# define FLOOR_Y wolf->ray_cast[x].floor.floor_y

typedef	struct	s_player
{
	double	player_x;
	double	player_y;
	double	speed;
	double	rotation;
}				t_player;

typedef struct	s_plane
{
	double	direction_vector_x;
	double	direction_vector_y;
	double	camera_plane_x;
	double	camera_plane_y;
}				t_plane;

typedef struct	s_raycast_floor
{
	double	floor_x_wall;
	double	floor_y_wall;
	double	dist_wall;
	double	current_dist;
	double	weight;
	double	current_floor_x;
	double	current_floor_y;
	int		floor_x;
	int		floor_y;
}				t_raycast_floor;

typedef struct	s_raycast
{
	double				camera_x;
	double				ray_pos_x;
	double				ray_pos_y;
	double				ray_dir_x;
	double				ray_dir_y;

	int					map_y;
	int					map_x;

	double				delta_dist_x;
	double				delta_dist_y;

	double				side_dist_x;
	double				side_dist_y;

	double				perp_wall_dist;

	int					step_x;
	int					step_y;

	int					side;
	int					line_height;
	int					top_point;
	int					bottom_point;

	double				wall_x;
	int					tex_x;
	int					tex_y;

	t_raycast_floor		floor;
}				t_raycast;

typedef struct	s_fps
{
	long long	time;
	double		old_time;
	double		frame_time;
}				t_fps;

typedef	struct	s_wolf
{
	int					menu;
	int					log;
	int					game;
	int					create_user_name;
	int					root;
	int					introduction;
	int					num_lvl;
	char				*user_name;
	t_mlx				*obj;
	t_img				*img;
	t_map				*map;
	t_xpm				*xpm;
	t_player			*player;
	t_plane				plane;
	t_raycast			*ray_cast;
	t_fps				fps;
}				t_wolf;

int				update(t_wolf *wolf);
void			start_game(t_wolf *wolf);
void			ft_fps(t_wolf *wolf);
void			draw_menu(t_wolf *wolf);
void			draw_log(t_wolf *wolf);
void			draw_galaxy(t_wolf *wolf);
void			draw_skybox(t_wolf *wolf);
void			create_player(t_wolf *wolf, int num);
int				draw_background(t_wolf *wolf);
void			draw_wall(t_wolf *wolf);
void			draw_floor(t_wolf *wolf, int x, int y);
void			create_plane(t_wolf *wolf);
void			ft_ray_cast(t_wolf *wolf);
void			lenght_of_ray(t_wolf *wolf, int x);
void			step_x(t_wolf *wolf, int x);
void			step_y(t_wolf *wolf, int x);
void			algoritm_dda(t_wolf *wolf, int x);
int				check_wall(t_wolf *wolf, int x, int y);
void			calculate_dist_project_camera_dir(t_wolf *wolf, int x);
void			calculate_height_line(t_wolf *wolf, int x);
void			calculate_top_and_bottom_point(t_wolf *wolf, int x);
void			varible_plane_for_start_ray_cast(t_wolf *wolf, int x);
void			calculate_value_wall_x(t_wolf *wolf, int x);
void			calculate_x_coordinate_texture(t_wolf *wolf, int x);
void			floor_casting(t_wolf *wolf, int x);
int				event_key(int keycode, t_wolf *wolf);
int				event_key_player(int keycode, t_wolf *wolf);
void			move_back(t_wolf *wolf);
void			move_forward(t_wolf *wolf);
void			rotate_left(t_wolf *wolf);
void			rotate_right(t_wolf *wolf);
int				event_mouse(int keycode, int x, int y, t_wolf *wolf);
int				destroy(t_wolf wolf);
void			create_user_name(t_wolf *wolf);
void			fill_char_user_name(int key, t_wolf *wolf);
void			check_keycode_one(int keycode, t_wolf *wolf, int len);
void			check_keycode_two(int keycode, t_wolf *wolf, int len);
void			check_keycode_three(int keycode, t_wolf *wolf, int len);
void			introduction(t_wolf *wolf);

#endif
