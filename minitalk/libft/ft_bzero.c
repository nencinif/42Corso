/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:45:42 by fabnenci          #+#    #+#             */
/*   Updated: 2024/01/27 16:41:31 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (len > 0)
	{
		*tmp++ = 0;
		len--;
	}
}
/*
int main()
{
	 char source[7] = "banana";
	 size_t len = 2;
	 ft_bzero(source,len);
	 printf("%s",source[2]);
}
*/
