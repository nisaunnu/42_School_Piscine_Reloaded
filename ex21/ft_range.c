/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:35:05 by nunnu             #+#    #+#             */
/*   Updated: 2023/06/19 20:48:39 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = malloc(range * sizeof(int));
	if (!d)
		return (0);
	index = 0;
	while (index < range)
	{
		d[index] = min + index;
		index++;
	}
	return (d);
}
