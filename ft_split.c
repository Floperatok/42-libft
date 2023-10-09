/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:47:05 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/10 00:47:14 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while ((*s == c) && *s)
			s++;
		counter++;
		while ((*s != c) && *s)
			s++;
	}
	return (counter);
}

char	*get_word(char const *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	word = (char *) malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;

	array = (char **) malloc(sizeof(char *) * count_words(s, c) + 1);
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while ((*s == c) && *s)
			s++;
		if (*s != '\0')
			array[i] = get_word(s, c);
		while ((*s != c) && *s)
			s++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
/*
int	main(void)
{
	char	*s1 = "  tripouille  42  ";
	char	c = ' ';
	int		i = 0;
	char	**tab = ft_split(s1, c);

	while (i < 2)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/