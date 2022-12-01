/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:29:20 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/30 09:56:14 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Reproduce the behavior of the function strstr (man strstr).
/*include <stdio.h>
int	main()
{
	char str[] = "TheOnePieceIsReal";
	char find[] = "Is";
	printf("%s", ft_strstr(str, find));
}
  */
/* finds the first occurrence of the substring needle in the string haystack. 
 * The terminating '\0' characters are not compared.*/

char	*ft_strstr(char *str, char *to_find)
{
	int	hay;
	int	nd;

	hay = 0;
	nd = 0;
	if (to_find[nd] == '\0')
		return (0);
	while (str[hay] != '\0')
	{
		while (str[hay + nd] != '\0' && str[hay + nd] == to_find[nd])
			nd++;
		if (to_find[nd] == '\0')
			return (str + hay);
		hay++;
		nd = 0;
	}
	return (0);
}
