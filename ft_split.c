/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:44:46 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/11 15:34:39 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (!s[0])
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			counter++;
		while (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		wsize;
	int		i;

	if (!s)
		return (NULL);
	tab = (char **) ft_calloc(sizeof(char *), count_words(s, c) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		wsize = 0;
		while (*s == c && *s)
			s++;
		while (s[wsize] != c && s[wsize])
			wsize++;
		if (wsize > 0)
		{
			tab[i++] = ft_substr(s, 0, wsize);
			s += wsize;
		}
	}
	tab[i] = NULL;
	return (tab);
}
