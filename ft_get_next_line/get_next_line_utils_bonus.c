/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:33:23 by fabnenci          #+#    #+#             */
/*   Updated: 2024/04/25 15:52:23 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*res;
	size_t			i;
	void			*alloc;

	i = 0;
	alloc = (void *)malloc(nmemb * size);
	if (!alloc)
		return (NULL);
	res = (unsigned char *)alloc;
	while (i < nmemb * size)
	{
		res[i++] = 0;
	}
	return (alloc);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 127)
		c = c % 128;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int				i;
	char			*cat;
	char			*sc1;
	char			*sc2;

	i = 0;
	sc1 = s1;
	sc2 = s2;
	cat = ft_calloc((ft_strlen(sc1) + ft_strlen(sc2) + 1), sizeof(char));
	if (!cat)
		return (NULL);
	while (*sc1)
	{
		cat[i] = *sc1;
		i++;
		sc1++;
	}
	while (*sc2)
	{
		cat[i] = *sc2;
		i++;
		sc2++;
	}
	free (s1);
	return (cat);
}
