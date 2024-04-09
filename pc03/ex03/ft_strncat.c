/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:50:27 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/27 19:00:00 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*devolver;

	devolver = dest;
	while (*dest != '\0')
		dest++;
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
		nb--;
	}
	*dest = '\0';
	return (devolver);
}

/*int	main(void)
{
	char	dest[100] = "Jhonatan";
	char	src[8] = " Ojeda";
	unsigned int nb = 3;
	char	*devolver;

	devolver = ft_strncat(dest, src, nb);
	write(1, dest, sizeof(dest));
	write(1, "\n", 1);
	write(1, devolver, sizeof(devolver));
	return (0);
}*/
