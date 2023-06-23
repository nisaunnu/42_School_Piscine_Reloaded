/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:56:55 by nunnu             #+#    #+#             */
/*   Updated: 2023/06/21 09:41:32 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb > 0) && (nb < 13))
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}
