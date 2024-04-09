/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:43:27 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/29 14:35:17 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb <= 1073741823)
		result = 1;
	if (nb > 1073741823)
		result = 32767;
	while ((result * result <= nb) && (result <= 46340))
	{
		result++;
	}
	if ((result -1) * (result -1) == nb)
	{
		return (result - 1);
	}
	else
		return (0);
}

/*void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		nb;
	char	raiz[6];
	int		i;
	int		resultado;

	nb = 2147483647;
	i = 0;
	resultado = ft_sqrt(nb);
	if (resultado > 9)
	{
		while (resultado > 9)
		{
			raiz[i] = '0' + resultado % 10;
			resultado /= 10;
			i++;
		}
	}
	raiz[i] = '0' + resultado;
	while (i >= 0)
	{
		putchar(raiz[i]);
		i--;
	}
	return (0);
}*/
