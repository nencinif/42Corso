/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:57:38 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/05 14:45:30 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long		nbr;

	nbr = n;
	len = ft_intlen(nbr);
	str = (char *)malloc (sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	str[len] = '\0';
	len--;
	while (len >= 0 + (n < 0))
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

/*
int	main()
{
	printf("%s\n",ft_itoa(-589));
	printf("%s\n",ft_itoa(42424242));
}
*/
