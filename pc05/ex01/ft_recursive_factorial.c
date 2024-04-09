/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:15:51 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/28 18:15:04 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}

/*void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		result;
	int		nb;
	char	fact[1000];
	int		i;

	nb = 10;
	i = 0;
	result = ft_recursive_factorial(nb);
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
