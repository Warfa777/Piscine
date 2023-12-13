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

void	conditions_inside(char *str, int i, int *j)
{
	if ('A' <= str[i] && str[i] <= 'Z')
	{
		if (*j > 0)
		{
			str[i] += 32;
		}
		(*j)++;
	}
	else if ('a' <= str[i] && str[i] <= 'z')
	{
		if (*j == 0)
		{
			str[i] -= 32;
		}
		(*j)++;
	}
	else if ('0' <= str[i] && str[i] <= '9')
		(*j)++;
	else
		(*j) = 0;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		conditions_inside(str, i, &j);
		i++;
	}
	return (str);
}
