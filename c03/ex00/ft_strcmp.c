/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:19:08 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/30 09:49:09 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Reproduce the behavior of the function strcmp (man strcmp).
/*#include <stdio.h>
int     main(void)
{
        printf("%d\n", ft_strcmp("Hello" , "Hello"));
        printf("%d\n", ft_strcmp("Hello2" , "Hello"));
        printf("%d\n", ft_strcmp("Hello" , "Hello2"));
        printf("%d\n", ft_strcmp("Hellos" , "Hello"));
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}
