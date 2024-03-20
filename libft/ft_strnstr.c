/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:07:43 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/25 15:35:22 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[l])
		{
			while (big[i + l] == little[l] && i + l < len)
			{
				if (little[l + 1] == '\0')
					return ((char *)big + i);
				l++;
			}
			l = 0;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	 char source[7] = "banana";
	 char find[3] = "na";
	 size_t len = 7;

	 printf("%s",ft_strnstr(source, find,len));
}
*/
