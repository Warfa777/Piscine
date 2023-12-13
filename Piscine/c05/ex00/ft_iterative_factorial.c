/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:29:26 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/11 03:05:17 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 0;
	factorial = 1;
	if (nb == 0)
	{
		factorial = 1;
		return (factorial);
	}
	if (nb < 0)
	{
		factorial = 0;
		return (factorial);
	}
	while (i < nb && nb > 0)
	{
		factorial = factorial * (nb - i);
		i++;
	}
	return (factorial);
}
