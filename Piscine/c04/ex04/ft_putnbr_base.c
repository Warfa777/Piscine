/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:01:18 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/14 14:52:03 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	radix_check(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	nbr_long;
	int			i;
	int			numero[40];

	i = 0;
	base_len = radix_check(base);
	nbr_long = nbr;
	if (nbr_long < 0)
	{
		write(1, "-", 1);
		nbr_long = -nbr_long;
	}
	if (nbr == 0)
		write(1, &base[0], 1);
	while (nbr_long > 0 && base_len > 0)
	{
		numero[i++] = (nbr_long % base_len);
		nbr_long /= base_len;
	}
	while (i > 0)
	{
		i--;
		write(1, &base[numero[i]], 1);
	}
}

int	radix_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			if (base[j] == '+' || base[j] == '-')
				return (0);
			else
				j++;
		}
		i++;
	}
	return (i);
}
