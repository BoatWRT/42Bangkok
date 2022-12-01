/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:39:29 by wtangcha          #+#    #+#             */
/*   Updated: 2022/12/01 16:01:38 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*int main(void) {
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 3, ft_is_prime(3));
	printf("%d -> %d\n", 10, ft_is_prime(10));
  return 0;
}*/
//Create a function that returns 1 if the number given as 
//a parameter is a prime number, and 0 if it isn’t.
//prime number is a whole number greater than 1
//whose only factors are 1 and itself (so factor = 2)
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

int main(void) {
        printf("%d -> %d\n", 0, ft_is_prime(0));
        printf("%d -> %d\n", 1, ft_is_prime(1));
        printf("%d -> %d\n", 2, ft_is_prime(2));
        printf("%d -> %d\n", 3, ft_is_prime(3));
        printf("%d -> %d\n", 10, ft_is_prime(10));
  return 0;
}
