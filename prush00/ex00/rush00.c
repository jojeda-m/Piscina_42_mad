/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 05:06:03 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/11 18:16:27 by evrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	xx;
	int	yy;

	xx = 0;
	yy = 0;
	while (yy < y)
	{
		xx = 0;
		yy++;
		while (xx < x)
		{
			xx++;
			if ((xx == 1 || xx == x) && (yy == 1 || yy == y))
			{
				ft_putchar('o');
			}
			else if ((xx == 1 || xx == x) && (yy > 1 && yy < y))
			{
				ft_putchar('|');
			}
			else if ((xx > 1 && xx < x) && (yy > 1 && yy < y))
			{
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('-');
			}
		}
		ft_putchar('\n');
	}
}
