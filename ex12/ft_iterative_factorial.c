/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrummuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:33:21 by jrummuka          #+#    #+#             */
/*   Updated: 2021/10/27 18:00:16 by jrummuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb == 0)
		return (1);
	else if (nb > 12)
		return (0);
	i = nb;
	result = 1;
	while (nb / i != nb)
	{
		result = i * result;
		i--;
	}
	return (result);
}
