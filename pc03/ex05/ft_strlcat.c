/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:11:47 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/28 12:43:29 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	int				i;

	i = 0;
	size_dest = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[i] != '\0' && (size_dest < (size - 1)))
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	dest[size_dest] = '\0';
	return (size_dest);
}

/*int	main(void)
{
	char	dest[20] = "Jhonatan";
	char	src[] = "Ojeda";
	unsigned int 	size = 20;
	char	len;

	unsigned int result = ft_strlcat(dest, src, size);
	
	while (result > 9)
	{
		len = ('0' + result % 10);
		write(1, &len, 1);
		result = result / 10;
	}
		len = '0' + result;
		write(1, &len, 1);
	return (0);
}*/
