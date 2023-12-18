/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:55:29 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/14 16:52:33 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	radix_check(char*base);

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			base_len;
	int			sign_count;
	long int	store_nb;

	i = 0;
	base_len = radix_check(base);
	sign_count = 0;
	store_nb = 0;

//prendere valore numerico da str
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign_count++;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			store_nb = (store_nb) * 10 % base_len + (str[i] - '0');
		else
			break ;
		i++;
	}
	if (sign_count % 2 == 1)
		store_nb = -store_nb;
	return (store_nb);	
/* ho ottenuto il decimale dalla stringa, converto nella base
    i = 0;
    if (store_nb == 0)
        return (base[0]);
    while (store_nb > 0 && base_len > 0)
    {
        numero[i++] = (store_nb % base_len);
        store_nb /= base_len;
    }
// numnero[] ora ha tutte le cifre nella base al contario
    while (i > 0)
    {
        i--;
        write(1, &base[numero[i]], 1);
    }
	return (store_nb);
} */
}
//verifica della correttezza della base
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

