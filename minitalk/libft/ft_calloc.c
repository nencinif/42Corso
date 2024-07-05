/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:04:03 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/22 16:38:49 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			total;

	total = count * size;
	i = 0;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/*
int main()
{
    int *arr = ft_calloc(5, sizeof(int));
	int i = 0;
    if (arr == NULL)
    {
        printf("errore!\n");
        return 1;
    }
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
    while (i < 5)
    {
        printf("%d ", arr[i]);
		i++;
    }

    free(arr);
    return 0;
}
*/
