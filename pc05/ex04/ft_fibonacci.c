/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:00:00 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/29 13:00:11 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

/*void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int		index;
	int		result;
	char	fibo[1000];
	int		i;

	i = 0;
	index = 3;
	result = ft_fibonacci(index);
	if (result > 9)
	{
		while (result > 9)
		{
			fibo[i] = '0' + result % 10;
			result /= 10;
			i++;
		}
	}
	fibo[i] = '0' + result;
	while (i >= 0)
	{
		putchar(fibo[i]);
		i--;
	}
	return (0);
}*/
