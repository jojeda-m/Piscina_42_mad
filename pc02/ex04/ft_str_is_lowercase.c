/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:58:14 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/20 13:01:17 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
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
			if (!((str[p_str] >= 'a') && (str[p_str] <= 'z')))
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

	string = "abcdefg";
	char	resultado = ft_str_is_lowercase(string) + '0';
	write(1, &resultado, 1);
	return (0);
}*/
