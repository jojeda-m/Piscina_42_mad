/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:24:05 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/29 16:56:30 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (nb);
	if ((nb % 2 == 0) || (nb < 2))
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		nb;
	int		c;
	char	np[10];
	int		i;

	nb = 2015478413;
	c = ft_find_next_prime(nb);
	i = 0;
	while (c > 9)
		{
			np[i] = '0' + c % 10;
			c /= 10;
			i++;
		}
	np[i] = '0' + c;
	while (i >= 0)
	{
		putchar(np[i]);
		i--;
	}
	return (0);
}*/
