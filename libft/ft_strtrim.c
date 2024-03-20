/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:35:04 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/05 14:55:23 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcheck(const char *set, char a)
{
	int	i;

	i = 0;
	while (set[i] != '\0' )
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trm;
	int		i;
	int		y;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	y = 0;
	while (i < len && charcheck(set, s1[i]))
	{
		i++;
	}
	while (len > i && charcheck(set, s1[len - 1]))
	{
		len--;
	}
	trm = malloc(sizeof(char) * (len - i + 1));
	if (!trm)
		return (NULL);
	while (i < len)
	{
		trm[y++] = s1[i++];
	}
	trm[y] = '\0';
	return (trm);
}
/*
int	main()
{
	char	uno[7] = "banana";
	char	due[3] = "ba";

	printf("%s",ft_strtrim(uno, due));
}
*/