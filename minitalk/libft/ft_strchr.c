/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:15:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/23 18:19:54 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
int	main()
{
	char	*s;
	int	c;

	s = "banana";
	c = 110;

	printf("%s", ft_strchr(s,c));
}
*/
