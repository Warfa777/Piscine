/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:36:36 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/11 22:02:43 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (1);
}
