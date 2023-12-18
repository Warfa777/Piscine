/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:37:45 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/16 19:54:03 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int len;
	int i;
	char *stringa;

	len = ft_strlen(src);
	i = 0;
	stringa = (char*)malloc(len + 1);
	
	while(src[i])
	{
		stringa[i] = src[i];
		i++;
	}
    stringa[i] = '\0';
	return (stringa);
}

