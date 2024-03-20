/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:12:02 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/25 16:10:58 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < len)
		ft_memcpy(dst, src, srclen + 1);
	else if (len != 0)
	{
		ft_memcpy(dst, src, len - 1);
		dst[len - 1] = 0;
	}
	return (srclen);
}
/*
int main()
{
    char src[7] = "banana";
    char dst[7] = "banana";
    printf("%d",ft_strlcpy(dst, src, 20));

}
*/
