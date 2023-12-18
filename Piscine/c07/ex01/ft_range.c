/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:05:10 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/16 21:34:28 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;

    if (min >= max)
        return (NULL);
    array = (int*)malloc(sizeof(*array) * (max - min));
    i = 0;
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}
