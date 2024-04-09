/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:58:46 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/17 23:49:08 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{	
	int	a = 21;
	int	b = 7;
	int cociente, resto;
	char	c, r;

	ft_div_mod(a, b, &cociente, &resto);
	c = cociente + '0';
	r = resto + '0';
	write(1, &c, 1);
	write(1, &r, 1);
	return (0);
}*/
