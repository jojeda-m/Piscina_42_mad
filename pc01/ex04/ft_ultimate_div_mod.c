/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:21:20 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/17 23:47:28 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cociente;
	int	resto;

	if (*b != 0)
	{
		cociente = *a / *b;
		resto = *a % *b;
		*a = cociente;
		*b = resto;
	}
	else
	{
		write(1, "No se puede dividir entre 0", 30);
	}
}

/*int	main(void)
{
	int	x, y;
	char	c, r;

	x = 9;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	c = x + '0';
	r = y + '0';
	write(1, &c, 1);
	write(1, &r, 1);
	return (0);
}*/
