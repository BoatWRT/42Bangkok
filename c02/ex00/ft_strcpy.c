/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:17:43 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/29 14:11:15 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Reproduce the behavior of the function strcpy (man strcpy).
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
    char	*src = "C programming";
    char	dest[42];
	ft_strcpy(dest, src);
	printf("before : %s\n",src);
	printf("after  : %s\n",dest);
	return 0;
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
