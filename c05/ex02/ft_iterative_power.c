/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:57:44 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/28 15:00:51 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Create an iterated function that returns the value of 
//a power applied to a number.
/*An power lower than 0 returns 0. Overflows must not be handled.
We’ve decided that 0 power 0 will returns 1*/
/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_power(2, 3));
}*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
