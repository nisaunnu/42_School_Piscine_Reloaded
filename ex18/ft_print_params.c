/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:57:40 by nunnu             #+#    #+#             */
/*   Updated: 2023/06/18 20:32:20 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 1)
	{
		i = 1;
		while (av[i] != NULL)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				ft_putchar(av[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
