/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:06:22 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/05 20:17:23 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d = ", ft_isdigit('a'));
	printf("%d\n", isdigit('a'));

	printf("%d = ", ft_isdigit('4'));
	printf("%d\n", isdigit('4'));
	return (0);
}*/