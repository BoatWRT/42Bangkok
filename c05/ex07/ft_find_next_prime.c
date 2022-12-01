/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:49:37 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/29 10:22:52 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
int main (void)
{
	printf("%d -> %d\n", 12, ft_find_next_prime(12));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
  return 0;
}*/
/* Create a function that returns the next prime number 
greater or equal to the number given as argument.*/

int	ft_is_prime(int nb)
{
	int	i;
	int	factor;

	factor = 0;
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
		factor++;
		i++;
	}
	if (factor == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
			nb++;
	}
	return (0);
}
