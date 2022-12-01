/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:08:49 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/28 15:12:39 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Create a function ft_fibonacci that returns the n-th element 
of the Fibonacci sequence, the first element 
being at the 0 index. We’ll consider that the Fibonacci
sequence starts like this: 0, 1, 1, 2. */
/*Overflows must not be handled, the function return will be undefined.
Obviously, ft_fibonacci has to be recursive.*/
// If the index is less than 0, the function should return -1.
/*#include <stdio.h>
int	main(void)
{
	printf("%i", ft_fibonacci(9));
}*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
