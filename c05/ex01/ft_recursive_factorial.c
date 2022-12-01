/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:50:53 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/28 14:56:55 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a recursive function that returns the 
factorial of the number given as a parameter.*/
//If the argument is not valid the function should return 0.
//Overflows must not be handled, the function return will be undefined.
/*#include <stdio.h>
	int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
