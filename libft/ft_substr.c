/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:21:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/06 16:51:51 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;

	i = 0;
	if (s == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	if (len > strlen - start)
		len = strlen - start;
	if (start > strlen)
		len = 0;
	substr = (char *) malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0' && start < strlen)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main()
{
	char	src[7] = "banana";
	char	dest[7] = "";

	printf("%s",ft_substr(src, 3, 2));
}
*/