/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:34:47 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/28 19:57:24 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0 || nb == 1)
		return (1);
	if (power == 1)
		return (nb);
	if ((nb == 0 && power != 0) || (power < 0))
		return (0);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		result;
	int		nb;
	int		power;
	char	pot[1000];
	int		i;

	nb = 3;
	power = 3;
	i = 0;
	result = ft_recursive_power(nb, power);
	if (result > 9)
	{
		while (result > 9)
		{
			pot[i] = '0' + result % 10;
			result /= 10;
			i++;
		}
	}
	pot[i] = '0' + result;
	while (i >= 0)
	{
		putchar(pot[i]);
		i--;
	}
	return (0);
}*/
