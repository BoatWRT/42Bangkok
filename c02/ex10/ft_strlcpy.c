/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:56:14 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/23 10:00:17 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Reproduce the behavior of the function strlcpy (man strlcpy)
/*int           main(void)
{
        char src[] = "Test1234";
        char dest[] = "123";
        printf("%d | %s", ft_strlcpy(dest, src, 8), dest);
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
		length++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
