/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:24:13 by hefernan          #+#    #+#             */
/*   Updated: 2021/02/24 16:24:57 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

size_t    ft_strlen(char *s, int z)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == '\n' && z)
            return (i);
        i++;
    }
    return (i);
}

int     main(void)
{
    char tab[30] = "ldsqodsjo\ndsq";
    printf("%d\n", ft_strlen(tab, 1));
    return (0);
}