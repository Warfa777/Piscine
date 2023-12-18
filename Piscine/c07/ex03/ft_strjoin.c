/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:40:22 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/17 22:42:31 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strings_len(int size, char **strs)
{
	int	i;
	int	j;
	int	lenght;

	i = 0;
	lenght = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			lenght++;
		}
		i++;
	}
	return (lenght);
}

int	sep_len(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*total_string;
	char	*empty;
	int		value;
	int		i;
	int		j;
	int		k;
	int		l;

	//empty = NULL;
	value = strings_len(size, strs);
	total_string = (char *)malloc((sizeof(char) * value)
			+ ((sep_len(sep) * (size - 1)) + 1));
	if (total_string == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
			total_string[i++] = strs[j][k++];
		while (sep[l] && j < (size - 1))
			total_string[i++] = sep[l++];
		j++;
		l = 0;
	}
	total_string[i] = '\0';
	return (total_string);
}
