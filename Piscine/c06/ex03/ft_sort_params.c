/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:10:43 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/13 15:11:26 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main (int argc, char *argv[])
{
    int i;
    int j;
    char *temp;

    i = 1;
    j = 0;
    while (i < argc)
    {
        if  (argv[i][j] > argv[i + 1][j])
        {
            temp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = temp;
        }
        i++;
    }
    
    i = 0;
    
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
