/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:42:31 by asvirido          #+#    #+#             */
/*   Updated: 2017/03/13 15:42:32 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		update(t_wolf *wolf)
{
	TIME = clock();
	if (wolf->game == 2)
		start_game(wolf);
	if (wolf->log == 1)
		draw_log(wolf);
	else if (wolf->menu == 1)
		draw_menu(wolf);
	if (wolf->create_user_name == 1)
		create_user_name(wolf);
	if (wolf->introduction == 1 || wolf->introduction == 2)
		introduction(wolf);
	return (1);
}
