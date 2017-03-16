/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_lvl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 15:14:26 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/18 15:14:34 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_data_map.h"

int		ft_len_lvl(int fd)
{
	int		len;
	int		res;
	char	buff[1];

	len = 0;
	while ((res = read(fd, buff, 1)) > 0)
	{
		if (buff[0] != '\n')
			len++;
	}
	return (len);
}
