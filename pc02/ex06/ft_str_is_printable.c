/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:53:40 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/20 13:08:10 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	p_str;

	p_str = 0;
	if (str[p_str] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[p_str] != '\0')
		{
			if (!((str[p_str] >= 32) && (str[p_str] <= 126)))
			{
				return (0);
			}
			p_str ++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	*string;

	string = "0123456";
	char	resultado = ft_str_is_printable(string) + '0';
	write(1, &resultado, 1);
	return (0);
}*/
