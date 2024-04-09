/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:03:45 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/02/18 04:29:25 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	pos;

	pos = 0;
	while (pos < (size / 2))
	{
		swap = tab[pos];
		tab[pos] = tab[size - pos - 1];
		tab[size - pos - 1] = swap;
		pos ++;
	}
}

/*int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
	int size = sizeof(array) / sizeof(array)[0];

	printf("Array original: ");
	int i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	ft_rev_int_tab(array, size);

	printf("\nArray invertido: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}*/
