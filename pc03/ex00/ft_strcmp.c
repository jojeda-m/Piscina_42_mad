/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:39:30 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/26 21:58:28 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	resultado;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	resultado = *s1 - *s2;
	return (resultado);
}

/*void	ft_imp_int_a_char(int	n)
{
	char	c = n + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "b";
	str2 = "a";

	int	res_int = ft_strcmp(str1, str2);
	
    if (res_int < 0) 
	{
        write(1, "-", 1);
        res_int = -res_int;
    }
    if (res_int == 0) 
	{
        write(1, "0", 1);
    } 
	else 
	{
    	while (res_int > 0)
		{	
            ft_imp_int_a_char(res_int % 10);
            res_int /= 10;
		}
	}
	return (0);

}*/
