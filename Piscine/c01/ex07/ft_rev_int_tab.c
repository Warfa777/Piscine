/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:11:10 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/05 21:11:18 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	var;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		var = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = var;
		i++;
	}
}
