/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:24:13 by hefernan          #+#    #+#             */
/*   Updated: 2021/02/24 21:40:52 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//int     get_next_line(int fd, char **line)
//{
    
//}

int		main(void)
{
	int len;
    char *tab = "mounir";
	char *tab1 = "henrique";
	len = ft_strlen(tab, 0);
	tab = malloc (len * sizeof(char));
	
    printf("%s\n", ft_freestrjoin(tab, tab1));
	printf("%d\n", BUFFER_SIZE);
    return (0);
}