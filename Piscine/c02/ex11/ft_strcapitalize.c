/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:33:59 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/07 16:38:50 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd>

void    conditions_inside(char *str, int i)
{

    if (0x0 <= str[i] && str[i] <= 0x1F || str[i] == 0x7F)
    {
        str[i] = '';
    }
    
}

void ft_putstr_non_printable(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        conditions_inside(str, i);
        i++;
    }
}
