/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:18:06 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/29 12:44:51 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0 || nb == 1)
		return (1);
	if (power == 1)
		return (nb);
	if ((nb == 0 && power != 0) || (power < 0))
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
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
	char	fact[1000];
	int		i;

	nb = 3;
	power = 3;
	i = 0;
	result = ft_iterative_power(nb, power);
	if (result > 9)
	{
		while (result > 9)
		{
			fact[i] = '0' + result % 10;
			result /= 10;
			i++;
		}
	}
	fact[i] = '0' + result;
	while (i >= 0)
	{
		putchar(fact[i]);
		i--;
	}
	return (0);
}*/
