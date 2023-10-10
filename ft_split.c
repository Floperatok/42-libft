/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:44:46 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/11 01:55:29 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
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
	tab = (char **) malloc(sizeof(char *) * count_words(s, c) + 1);
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
			tab[i++] = ft_strdup(ft_substr(s, 0, wsize));
			s += wsize;
		}
	}
	tab[i] = NULL;
	return (tab);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int	main(void)
{
	char	**tabstr;
	if (!(tabstr = ft_split("", 'z')))
		ft_print_result("NULL");
	else
		if (!tabstr[0])
			ft_print_result("ok\n");
		else
			ft_print_result("con\n");
}
*/