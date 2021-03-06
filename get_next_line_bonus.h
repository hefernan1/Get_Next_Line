/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:24:39 by hefernan          #+#    #+#             */
/*   Updated: 2021/03/06 19:01:31 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# define SUCCESS 1
# define FINISH 0
# define ERROR -1

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>

size_t		ft_strlen(char *s, int n);
int			inter(char c, char *str);
char		*ft_freestrjoin(char *s1, char *s2);
char		*ft_substr(char *s, unsigned int start, size_t len);
void		*ft_calloc(size_t count, size_t size);
int			get_next_line(int fd, char **line);

#endif
