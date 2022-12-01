/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:43:51 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/30 10:29:21 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//Create a program that displays its given arguments.
//One per line, in the reverse order of the command line.
//It should display all arguments, except for argv[0].
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 0)
	{
		while (argv[i] != NULL && argc != '\0')
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i--;
			if (i == 0)
				return (0);
		}
	}
}
