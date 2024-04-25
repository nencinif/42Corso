/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:56:26 by fabnenci          #+#    #+#             */
/*   Updated: 2024/04/25 16:36:23 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"


char	*ft_read(int fd, char *selection)
{

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

char	*get_next_line(int fd)
{

}
