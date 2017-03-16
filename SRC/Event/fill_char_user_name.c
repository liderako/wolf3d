/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_char_user_name.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 20:40:10 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/10 20:22:45 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	fill_char_user_name(int key, t_wolf *wolf)
{
	int		len;

	len = ft_strlen(wolf->user_name);
	if (key == 51 && len > 0)
		wolf->user_name[len - 1] = '\0';
	if (len < 16)
	{
		check_keycode_one(key, wolf, len);
		check_keycode_two(key, wolf, len);
		check_keycode_three(key, wolf, len);
	}
	wolf->create_user_name = 1;
}
