/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_data_map.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 15:54:18 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 15:54:18 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_DATA_MAP_H
# define CREATE_DATA_MAP_H
# define SIZE_LVL 1
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_lvl
{
	int		x;
	int		y;
	char	obj;
}				t_lvl;

typedef	struct	s_map
{
	t_lvl	*lvl;
	int		len_lvl;
	int		size_x;
	int		size_y;
}				t_map;

t_map			*create_map(void);
int				ft_open_fd(int num_map);
int				ft_len_lvl(int fd);
t_lvl			*create_lvl_map(int len, int num_map);
t_lvl			*read_map(t_lvl *lvl, int fd);

#endif
