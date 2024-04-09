/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:19:31 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/27 14:47:07 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	putchar('0' + (nb % 10));
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	putchar('\n');
	ft_putnbr(2147483647);
	putchar('\n');
	ft_putnbr(0);
	putchar('\n');
	ft_putnbr(-42);
	putchar('\n');
	ft_putnbr(42);
	putchar('\n');
	return (0);
}*/
