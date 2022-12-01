/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:04:12 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/28 15:06:54 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Create an iterated function that returns the 
 * value of a power applied to a number.
An power lower than 0 returns 0. 
Overflows must not be handled.*/
// We’ve decided that 0 power 0 will returns 1
/*#include <stdio.h>
int	main(void) 
{
  printf("%i", ft_recursive_power(2, 3));
  return 0;
}*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (result);
}
