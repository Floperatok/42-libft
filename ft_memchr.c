/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:54:55 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/15 09:55:56 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *) s;
	if (n <= 0)
		return (NULL);
	while (src[i] != (unsigned char) c)
	{
		if (i >= n - 1)
			return (NULL);
		i++;
	}
	return (&src[i]);
}
// cherche dans les n bits suivant l'adresse s le caractère c, retourne un 
// pointeur vers le caractère trouvé ou NULL si non trouvé