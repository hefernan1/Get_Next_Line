/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:24:13 by hefernan          #+#    #+#             */
/*   Updated: 2021/03/13 22:56:20 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					get_next_line(int fd, char **line)
{
	static char		*s[10240];
	char			buf[BUFFER_SIZE + 1];
	int				sto;
	char			*tmp;

	if (fd < 0 || !line || BUFFER_SIZE < 1 || read(fd, buf, 0) < 0)
		return (ERROR);
	if (!s[fd] && !(s[fd] = ft_calloc(1, sizeof(char *))))
		return (ERROR);
	while ((inter('\n', s[fd])) < 0 && (sto = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[sto] = '\0';
		s[fd] = ft_freestrjoin(s[fd], buf);
	}
	*line = ft_substr(s[fd], 0, ft_strlen(s[fd], 1));
	if ((inter('\n', s[fd])) < 0)
	{
		free(s[fd]);
		s[fd] = NULL;
		return (FINISH);
	}
	tmp = s[fd];
	s[fd] = ft_substr(s[fd], inter('\n', s[fd]) + 1, ft_strlen(s[fd], 0));
	free(tmp);
	return (SUCCESS);
}
