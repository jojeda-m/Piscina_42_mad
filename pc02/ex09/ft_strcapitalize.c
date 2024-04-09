/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:11:40 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/23 00:11:20 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	p_str;

	p_str = 0;
	while (str[p_str] != '\0')
	{
		if ((str[p_str] >= 'a' && str[p_str] <= 'z') && ((str[p_str] == str[0])
				|| (str[p_str -1] >= 32 && str[p_str -1] <= 47)
				|| (str[p_str - 1] >= 58 && str[p_str - 1] <= 64)
				|| (str[p_str - 1] >= 91 && str[p_str - 1] <= 96)
				|| (str[p_str - 1] >= 123 && str[p_str - 1] <= 126)))
		{
			str[p_str] = str[p_str] -32;
		}
		else
		{
			if (str[p_str] >= 'A' && str[p_str] <= 'Z')
			{
				str[p_str] = str[p_str] +32;
			}
		}
		p_str++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[100] = "salut, comMent tu vas ? 42Lots quarante-deuet+un";

	ft_strcapitalize(str);
	write(1, str, sizeof(str) -1);
	return (0);
}*/
