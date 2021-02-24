/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:24:39 by hefernan          #+#    #+#             */
/*   Updated: 2021/02/24 19:41:17 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
# endif

# define SUCCESS 1
# define FINISH 0
# define ERROR -1

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>

#endif