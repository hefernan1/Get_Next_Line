/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:24:13 by hefernan          #+#    #+#             */
/*   Updated: 2021/03/07 21:04:20 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
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

/*void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	int		fd;
	char	*line;
	int		i;
	int		ret;
	int df;
	int ter;
	int k;

	i = 0;
	k = 0;
	fd = open("text.txt", O_RDONLY);
	df = open("open.txt", O_RDONLY);
	while (i < 10)
	{
		line = (char *)malloc(sizeof(*line) * 1);
		ret = get_next_line(fd, &line);
		printf("|%s|\n", line);
		i++;
	}
	while (k < 10)
	{
		line = (char *)malloc(sizeof(*line) * 1);
		ter = get_next_line(df, &line);
		printf("|%s|\n", line);
		k++;
	}
}*/