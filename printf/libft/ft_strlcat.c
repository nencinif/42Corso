/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:07:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/22 17:36:52 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= len)
		dstlen = len;
	if (dstlen == len)
		return (len + srclen);
	if (srclen < len - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, len - dstlen - 1);
		dst[len - 1] = '\0';
	}
	return (dstlen + srclen);
}

/*
int main()
{
    char src[7] = "banana";
    char dst[7] = "banana";
    printf("%d",ft_strlcat(src, dst, 20));
    
}
*/
