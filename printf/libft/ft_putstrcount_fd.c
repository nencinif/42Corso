/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrcount_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:43:51 by fabnenci          #+#    #+#             */
/*   Updated: 2024/03/20 17:04:13 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstrcount_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);

	return (len);
}

/*
int	main()
{
	char str[7] = "banana";

	ft_putstr_fd(str, 1);
}
*/
