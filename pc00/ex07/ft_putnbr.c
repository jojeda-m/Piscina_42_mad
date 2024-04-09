/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:39:33 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/26 20:28:22 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num[10];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb > 9)
	{
		num[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
		ft_putnbr(nb);
	}
	else
		num[i] = nb + '0';
	while (i >= 0)
	{
		write(1, &num[i], 1);
		i--;
	}
}

int	main(void)
{
	int	n = -55;
	ft_putnbr(n);
	return (0);
}
