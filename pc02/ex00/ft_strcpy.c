/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:13:32 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/20 12:41:47 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	p_src;

	p_src = 0;
	while (src[p_src] != '\0')
	{
		dest[p_src] = src[p_src];
		p_src++;
	}
	dest[p_src] = '\0';
	return (dest);
}

/*int	ft_strlen(char *str)
{
	int	p_str;

	p_str = 0;
	while (*str != '\0')
	{
		str++;
		p_str++;
	}
	return (p_str);
}

int	main()
{
	int	largo;
	char	*source;

	source = "Entendiendo la copia de cadena de caracteres";

	largo = ft_strlen(source);

	char	destination[largo];

	ft_strcpy(destination, source);

	write(1, destination, largo);

	return (0);
}*/
