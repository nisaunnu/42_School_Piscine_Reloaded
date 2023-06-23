/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:54:34 by nunnu             #+#    #+#             */
/*   Updated: 2023/06/18 16:41:06 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 2;
	if (nb > 2)
	{
		while (result * result <= nb)
		{
			if (result * result == nb)
				return (result);
			result++;
		}
	}
	else if (nb == 1)
		return (1);
	return (0);
}
