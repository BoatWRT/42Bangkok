/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:47:34 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/28 14:50:05 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Create a recursive function that returns the factorial 
of the number given as a parameter.*/
//If the argument is not valid the function should return 0.
//Overflows must not be handled, the function return will be undefined.
/*#include <stdio.h>
	int	main (void)
{
	printf("%i", ft_iterative_factorial(3));
}*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
