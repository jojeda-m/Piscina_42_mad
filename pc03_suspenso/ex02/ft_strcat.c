/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:35:03 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/27 19:02:17 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*devolver;

	devolver = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (devolver);
}

/*int	main(void)
{
	char	dest[100] = "Jhonatan";
	char	src[8] = " Ojeda";
	char	*devolver;

	devolver = ft_strcat(dest, src);
	write(1, dest, sizeof(dest));
	write(1, "\n", 1);
	write(1, devolver, sizeof(devolver));
	return (0);
}*/
