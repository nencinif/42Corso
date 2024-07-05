/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:43:57 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/30 18:27:07 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c > 127)
		c = c % 128;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char s[] = "afragolacci";
	int c = 'a';
	printf("%s\n", ft_strrchr(s, c));
	//write (1, s, 6);
	write (1, "\n", 1);
}
*/
