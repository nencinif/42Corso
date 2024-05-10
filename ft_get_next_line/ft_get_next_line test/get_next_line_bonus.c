/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:56:26 by fabnenci          #+#    #+#             */
/*   Updated: 2024/05/10 16:57:21 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_remaining_file(char *select, char *line)
{
	size_t	i;
	size_t	j;
	size_t	snip;

	i = 0;
	j = 0;
	while (select[i] && select[i] != '\n')
		i++;
	if (!select[i])
	{
		free(select);
		return (NULL);
	}
	snip = ft_strlen(select) - i;
	line = ft_calloc (snip + 1, sizeof(char));
	i++;
	while (select[i])
		line[j++] = select[i++];
	free (select);
	return (line);
}

char	*ft_read_line(char *select)
{
	char	*line;
	size_t	i;
	size_t	j;

	i = 0;
	if (!select[i])
		return (NULL);
	while (select[i] && select[i] != '\n')
		i++;
	line = ft_calloc (i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	j = 0;
	while (select[i] && select[i] != '\n')
		line[j++] = select[i++];
	if (select[i] == '\n')
		line[j] = '\n';
	return (line);
}

char	*ft_read(int fd, char *select)
{
	ssize_t	bytes;
	char	*read_sel;

	if (!select)
		select = ft_calloc(1, sizeof(char));
	read_sel = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes = 1;
	while (!ft_strchr(select, '\n') && bytes > 0)
	{
		bytes = read(fd, read_sel, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (read_sel);
			free (select);
			return (NULL);
		}
		read_sel[bytes] = '\0';
		select = ft_strjoin(select, read_sel);
	}
	free (read_sel);
	return (select);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*page[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd < 1024)
		return (NULL);
	page[fd] = ft_read(fd, page[fd]);
	if (!page[fd])
		return (NULL);
	line = ft_read_line(page[fd]);
	page[fd] = ft_remaining_file(page[fd], line);
	return (line);
}
