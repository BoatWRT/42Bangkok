/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:41:33 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/29 13:14:29 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Reproduce the behavior of the function strncmp (man strncmp).
/*
#include <stdio.h>
int   main(void)
{
        printf("%d\n", ft_strncmp("Hello" , "Hello",3));
        printf("%d\n", ft_strncmp("Hello2" , "Hello",6));
        printf("%d\n", ft_strncmp("Hello" , "Hello2",6));
        printf("%d\n", ft_strncmp("Hellos" , "Hello",0));
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
	i++;
	}
	return (0);
}
