/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:39:16 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/20 12:57:19 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
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
			if (!((str[p_str] >= 48) && (str[p_str] <= 57)))
			{
				return (0);
			}
			p_str++;
		}
		return (1);
	}
}

/*int	main(void)
{
	char	*string;

	string = "1234567";
	char	resultado = ft_str_is_numeric(string) + '0';
	write(1, &resultado, 1);
	return (0);
}*/
