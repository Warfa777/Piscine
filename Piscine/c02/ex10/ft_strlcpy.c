/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:41:19 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/06 22:41:31 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;

	i = 0;
	while (src[i] <= size - 1)
	{
		dest[i] = src[i];
		i++;
	}
    
    *dest[size] = "\0";
 	return (i);
}
