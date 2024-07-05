/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:06:44 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/05 16:23:27 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	cacca(unsigned int n , char *c)
{
	*c = 97 + n;

}

int	main()
{
	char	asd[7] = "banana";

	printf("%s",asd);

	ft_striteri(asd,cacca);

	printf("%s",asd);



}
*/
