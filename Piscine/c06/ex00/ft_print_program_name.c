/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:46:14 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/13 14:46:32 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main (int argc, char *argv[])
{
    int i;
    int j;

    i = 1;

    if (argc == 1)
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        if (argv[i + 1] != '\0')
        {
            char c;
            c = '\n';
            write(1, &c, 1);
        }
        i++;
    }
    return 0;
}
