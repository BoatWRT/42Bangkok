/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:25:07 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/29 14:22:03 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Create a function that returns 1 if the string given as a parameter
//contains only alphabetical characters, 
//and 0 if it contains any other character.
//ASCII value 65 = 'A' , 90 = 'Z' & 97 = 'a', 122 = 'z'

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
		{
			return (0);
		}	
	}
	return (1);
}
