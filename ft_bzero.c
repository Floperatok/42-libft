/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:01:15 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/15 08:24:14 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *) s;
	i = 0;
	while (i < n)
		ptrs[i++] = 0;
}
// écrit dans les n premiers bit suivant l'adresse s la valeur 0