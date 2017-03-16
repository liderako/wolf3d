# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makafile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asvirido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/04 14:27:54 by asvirido          #+#    #+#              #
#    Updated: 2017/03/12 21:39:03 by asvirido         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	wolf3d

FLAGS =	-c -O3 -Wall -Wextra -Werror

MLX = -lmlx -framework OpenGL -framework AppKit

HEADER = head.h

LIBFT =		./SRC/libft_src/ft_memcpy.c\
			./SRC/libft_src/ft_wait.c\
			./SRC/libft_src/ft_strlen.c\
			./SRC/libft_src/ft_bzero.c\
			./SRC/libft_src/ft_strcmp.c\

DRAW =		./SRC/Draw/draw_background.c\
			./SRC/Draw/draw_log.c\
			./SRC/Draw/draw_menu.c\
			./SRC/Draw/draw_galaxy.c\
			./SRC/Draw/draw_skybox.c\
			./SRC/Draw/draw_wall.c\
			./SRC/Draw/draw_floor.c\

SRC_MAP_CREATE = 	./SRC/src_map_create/create_map.c\
					./SRC/src_map_create/ft_open_fd.c\
					./SRC/src_map_create/ft_len_lvl.c\
					./SRC/src_map_create/create_lvl_map.c\
					./SRC/src_map_create/read_map.c\

MLX_SRC =	./SRC/mlx_src/create_img.c\
			./SRC/mlx_src/object_mlx.c\
			./SRC/mlx_src/create_xpm.c\

CONTOL_PLAYER = ./SRC/Event/contol_player/event_key_player.c\
				./SRC/Event/contol_player/move_back.c\
				./SRC/Event/contol_player/move_forward.c\
				./SRC/Event/contol_player/rotate_left.c\
				./SRC/Event/contol_player/rotate_right.c\

EVENT =		./SRC/Event/destroy.c\
			./SRC/Event/event_key.c\
			./SRC/Event/event_mouse.c\
			./SRC/Event/fill_char_user_name.c\
			./SRC/Event/check_keycode.c\
			./SRC/Event/create_user_name.c\
			./SRC/Event/introduction.c\

PLANE =		./SRC/plane/algoritm_dda.c\
			./SRC/plane/calculate_dist_project_camera_dir.c\
			./SRC/plane/calculate_height_line.c\
			./SRC/plane/calculate_top_and_bottom_point.c\
			./SRC/plane/check_wall.c\
			./SRC/plane/create_plane.c\
			./SRC/plane/ft_ray_cast.c\
			./SRC/plane/lenght_of_ray.c\
			./SRC/plane/step_x.c\
			./SRC/plane/step_y.c\
			./SRC/plane/varible_plane_for_start_ray_cast.c\
			./SRC/plane/calculate_x_coordinate_texture.c\
			./SRC/plane/calculate_value_wall_x.c\
			./SRC/plane/floor_casting.c\

OBJECT_GAME = ./SRC/obj_game/create_player.c

SRC =	./SRC/main.c\
		./SRC/ft_fps.c\
		./SRC/start_game.c\
		./SRC/update.c\
		$(MLX_SRC)\
		$(EVENT)\
		$(SRC_MAP_CREATE)\
		$(LIBFT)\
		$(DRAW)\
		$(OBJECT_GAME)\
		$(PLANE)\
		$(CONTOL_PLAYER)\

BINS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(BINS)
	@ gcc -o $(NAME) $(BINS)  $(MLX)\
		&& say -v "Cellos" "Compilation done"
%.o: %.c $(HEADER)
	@ gcc $(FLAGS) -o  $@ $<

clean:
	@ /bin/rm -f $(BINS)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
