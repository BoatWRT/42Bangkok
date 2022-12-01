/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:58:35 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/23 10:07:14 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Reproduce the behavior of the function strncpy (man strncpy).
/*#include <stdio.h>
#include <string.h>

int     main()
{
        char    dest[] = "hello";
        char    *src = "abc";

        ft_strncpy(dest , src, 6);
        printf("%s\n", dest);
        strncpy(dest , src, 6);
        printf("%s\n",dest);
        printf("%s\n",src);
        return 0;
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
