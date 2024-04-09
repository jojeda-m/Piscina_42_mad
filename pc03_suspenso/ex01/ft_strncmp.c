/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:27:52 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/28 12:46:29 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

/*void	intachar(int x)
{
	char	c = x + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char	*s1 = "alg";
	char	*s2 = "algo";
	unsigned int n = 5;
	int res = ft_strncmp(s1, s2, n);

	if (res < 0)
	{
		write(1, "-", 1);
		res = -res;
	}
	if (res == 0)
		write(1, "0", 1);
	else
	{
		intachar(res % 10);
		res /= 10;
	}
	return (0);
}*/
