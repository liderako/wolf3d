/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_keycode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 17:18:43 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/23 17:18:45 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	check_keycode_one(int keycode, t_wolf *wolf, int len)
{
	if (keycode == 0)
		wolf->user_name[len] = 'a';
	if (keycode == 1)
		wolf->user_name[len] = 's';
	if (keycode == 2)
		wolf->user_name[len] = 'd';
	if (keycode == 3)
		wolf->user_name[len] = 'f';
	if (keycode == 4)
		wolf->user_name[len] = 'h';
	if (keycode == 5)
		wolf->user_name[len] = 'g';
	if (keycode == 6)
		wolf->user_name[len] = 'z';
	if (keycode == 7)
		wolf->user_name[len] = 'x';
	if (keycode == 8)
		wolf->user_name[len] = 'c';
	if (keycode == 9)
		wolf->user_name[len] = 'v';
	if (keycode == 38)
		wolf->user_name[len] = 'j';
	if (keycode == 40)
		wolf->user_name[len] = 'k';
}

void	check_keycode_two(int keycode, t_wolf *wolf, int len)
{
	if (keycode == 11)
		wolf->user_name[len] = 'b';
	if (keycode == 12)
		wolf->user_name[len] = 'q';
	if (keycode == 13)
		wolf->user_name[len] = 'w';
	if (keycode == 14)
		wolf->user_name[len] = 'e';
	if (keycode == 15)
		wolf->user_name[len] = 'r';
	if (keycode == 16)
		wolf->user_name[len] = 'y';
	if (keycode == 17)
		wolf->user_name[len] = 't';
	if (keycode == 32)
		wolf->user_name[len] = 'u';
	if (keycode == 31)
		wolf->user_name[len] = 'o';
	if (keycode == 34)
		wolf->user_name[len] = 'i';
	if (keycode == 35)
		wolf->user_name[len] = 'p';
	if (keycode == 37)
		wolf->user_name[len] = 'l';
}

void	check_keycode_three(int keycode, t_wolf *wolf, int len)
{
	if (keycode == 46)
		wolf->user_name[len] = 'm';
	if (keycode == 45)
		wolf->user_name[len] = 'n';
	if (keycode == 18)
		wolf->user_name[len] = '1';
	if (keycode == 19)
		wolf->user_name[len] = '2';
	if (keycode == 20)
		wolf->user_name[len] = '3';
	if (keycode == 21)
		wolf->user_name[len] = '4';
	if (keycode == 23)
		wolf->user_name[len] = '5';
	if (keycode == 25)
		wolf->user_name[len] = '9';
	if (keycode == 26)
		wolf->user_name[len] = '7';
	if (keycode == 28)
		wolf->user_name[len] = '8';
	if (keycode == 29)
		wolf->user_name[len] = '0';
	if (keycode == 22)
		wolf->user_name[len] = '6';
}
