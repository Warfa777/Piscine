/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:17:06 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/16 22:36:22 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
    
    int size = max - min;
    
    *range = (int *)malloc(size * sizeof(int));
    
    if (*range == NULL)
        return (-1);
    while (i < size)
    {
        (*range)[i] = min + i;
        i++;
    }
    return (size);
}
