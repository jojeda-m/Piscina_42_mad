/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:56:49 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/20 13:12:21 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	p_str;

	if (str == '\0')
	{
		write(1, "Puntero Nulo", 12);
	}
	p_str = 0;
	while (str[p_str] != '\0')
	{
		if ((str[p_str] >= 'A') && (str[p_str] <= 'Z'))
		{
			str[p_str] = (str[p_str] + 32);
		}
		p_str++;
	}
	return (str);
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char	string[] = "ABCD";

	ft_putstr(ft_strlowcase(string));
	return (0);
}*/
