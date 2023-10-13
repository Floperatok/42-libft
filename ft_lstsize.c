/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalles <nsalles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:25:47 by nsalles           #+#    #+#             */
/*   Updated: 2023/10/13 15:08:14 by nsalles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	// Allocate memory for t_list elements
    t_list *elem = malloc(sizeof(t_list));
    t_list *elem2 = malloc(sizeof(t_list));
    t_list *elem3 = malloc(sizeof(t_list));

    // Check if memory allocation was successful
    if (elem == NULL || elem2 == NULL || elem3 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Return an error code
    }

    // Assign values to the content pointers
    elem->content = "salut";
    elem2->content = "42";
    elem3->content = "coucou";

    // Connect the elements
    elem->next = elem2;
    elem2->next = elem3;
    elem3->next = NULL;

    printf("%d\n", ft_lstsize(elem));
    printf("%s\n", (char *)elem->content);
    printf("%s\n", (char *)elem2->content);
    printf("%s\n", (char *)elem3->content);

    // Free the allocated memory
    free(elem);
    free(elem2);
    free(elem3);

    return 0;
}*/