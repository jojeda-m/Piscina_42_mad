/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   otherfuncs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:15:29 by dekhamid          #+#    #+#             */
/*   Updated: 2024/02/18 22:15:31 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

void	print_matriz(int matriz[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putnbr(matriz[x][y]);
			if (y < 3)
				ft_putchar(32);
			y++;
		}
		ft_putchar(10);
		x++;
	}
}
