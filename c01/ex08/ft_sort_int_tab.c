/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:15:08 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/23 12:20:04 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>
//#include <stdio.h>
//Create a function which sorts an array of integers by ascending order.
// The arguments are a pointer to int and the number of ints in the array
/*
int     main(void)
{
        int     tab[] = {5, 4, -9, 2, 1};
        int     size = 5;

        ft_sort_int_tab(tab ,size);
        printf("%d, %d, %d, %d, %d", tab[0],tab[1],tab[2],tab[3],tab[4]);
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (size >= 0)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
				i++;
		}
		i = 0;
	size--;
	}
}
