/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabnenci <fabnenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:07:04 by fabnenci          #+#    #+#             */
/*   Updated: 2024/02/12 17:51:10 by fabnenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
	return (arr);
}

static int	ft_start_point(const char *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

static int	ft_word_count(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (i == 0 && s[0] != c)
			words++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		i;
	int		start;
	int		count;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	splitted = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!splitted)
		return (NULL);
	while (ft_word_count(s, c) > count)
	{
		start = ft_start_point(s, c, i);
		i = start;
		while (s[i] && s[i] != c)
			i++;
		splitted[count] = ft_substr(s, start, i - start);
		if (!splitted[count])
			return (ft_free_arr(splitted));
		count++;
	}
	splitted[count] = NULL;
	return (splitted);
}
/*
int main()
{
    char **result;
    int i = 0;

    result = ft_split("ciao, gianni spero che tu stia bene!", ' ');
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}
*/
