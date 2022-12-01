/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:39:41 by wtangcha          #+#    #+#             */
/*   Updated: 2022/11/30 11:47:17 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(const char *a, const char *b)
{
	while (*a && *a == *b)
	{
	a++;
	b++;
	}
	return (*a - *b);
}

void	ft_sort_strings(int num, char **s)
{
	int	i;
	int	j;
	char	*temp;

	i = 1;
	while (i < num)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j-1], s[j]) > 0)
		{
			temp = s[j-1];
			s[j-1] = s[j];
			s[j] = temp;
			j--;
		}
		i++;
	}
}

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

	i = 1;
	ft_sort_strings(argc - 1, argv + 1);
	if (argc > 0)
	{
		while (argv[i] != NULL)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
