/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:58:23 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/13 14:58:46 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main (int argc, char *argv[])
{
    int i;
    int j;

    i = 1;

    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
            char c;
            c = '\n';
            write(1, &c, 1);
        i++;
    }
    return 0;
}
