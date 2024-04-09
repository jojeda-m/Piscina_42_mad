/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:38:20 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/20 13:04:55 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
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
			if (!((str[p_str] >= 'A') && (str[p_str] <= 'Z')))
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

	string = "ABCD";
	char	resultado = ft_str_is_uppercase(string) + '0';
	write(1, &resultado, 1);
	return (0);
}*/
