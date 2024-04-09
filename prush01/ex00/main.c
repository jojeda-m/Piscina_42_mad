/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:17:31 by dekhamid          #+#    #+#             */
/*   Updated: 2024/02/21 11:32:38 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

int	main(int argc, char **argv)
{
	int	matriz[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};

	if (argc != 0)
		ft_putstr("Error\n");
	else
		print_matriz(matriz);
	return (0);
}
