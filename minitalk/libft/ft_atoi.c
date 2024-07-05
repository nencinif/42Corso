/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:13:49 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/25 15:42:46 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	number;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		++str;
	}
	return (number * sign);
}
/*
int main()
{
    // test
        char test1[4] ="123";
        char test2[5] ="-456";
        char test3[2] ="0";
        char test4[11] ="2147483647";
        char test5[12] ="-2147483648";
        char test6[6] ="---10";

        printf("%d\n",ft_atoi(test1));
        printf("%d\n",ft_atoi(test2));
        printf("%d\n",ft_atoi(test3));
        printf("%d\n",ft_atoi(test4));
        printf("%d\n",ft_atoi(test5));
        printf("%d\n",ft_atoi(test6));
}
*/
