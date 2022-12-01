/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:37:14 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/30 09:40:51 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// Create a function that capitalizes the first letter of each word
// and transforms all other letters to lowercase.
// A word is a string of alphanumeric characters.
/*
#include <stdio.h>
int     main(void)
{
        char test[] = "salut, comment42mots quarante-deux; cinquante+et+un";
        char *proto = test;
        printf("%s\n", ft_strcapitalize(proto));
}
*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[0] <= 'z'))
		{
			str [i] = str [i] - 32;
			i++;
		}
		else if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
