/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:17:18 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/26 18:25:15 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	xy[5];

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			if (i == 98 && j == 99)
				write(1, "98 99", 5);
			else
			{
				putchar(xy[0] = '0' + i / 10);
				putchar(xy[1] = '0' + i % 10);
				putchar(xy[2] = ' ');
				putchar(xy[3] = '0' + j / 10);
				putchar(xy[4] = '0' + j % 10);
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
