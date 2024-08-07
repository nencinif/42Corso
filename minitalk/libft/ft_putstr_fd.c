/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:03:56 by fabnenci          #+#    #+#             */
/*   Updated: 2024/07/08 22:39:34 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putstr_fd(char *s, int fd)
{
    int count = 0;
    if (s)
    {
        while (*s)
        {
            write(fd, s, 1);
            s++;
            count++;
        }
    }
    return count;
}

/*
int	main()
{
	char str[7] = "banana";

	ft_putstr_fd(str, 1);
}
*/
