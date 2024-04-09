/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:56:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/26 21:18:04 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	negativenb;

	i = 0;
	nb = 0;
	negativenb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negativenb++;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if (negativenb % 2 == 1)
		return (nb * -1);
	return (nb);
}

/*void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	n;
	char	str[30]  = "     --+++--+-++7362bckb6763";
	char	nb[10];
	int	i = 0;
	n = ft_atoi(str);
	
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		while (n > 9)
		{
			nb[i] = ('0' + n % 10);
			n = n / 10;
			i++;
		}
	}	
	nb[i] = ('0' + n);
	while (i >= 0)
	{
		putchar(nb[i]);
		i--;
	}
	return (0);
}*/
