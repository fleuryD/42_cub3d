/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfleury <dfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:45:20 by dfleury           #+#    #+#             */
/*   Updated: 2023/02/15 12:49:02 by dfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb * size / size != nmemb)
		return (NULL);
	array = malloc (size * nmemb);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

/*
* Partie 1 - Fonctions de la libc
* vous pourrez faire appel à la fonction malloc()
==== Description
The calloc() function allocates memory for an array of nmemb elements
       of size bytes each and returns a pointer to the allocated memory.

The memory  is  set to zero.
If nmemb or size is 0, then calloc() returns
       either NULL, or a unique pointer value that can later be  successfully
       passed  to  free().

If the multiplication of nmemb and size would result in integer overflow,
 then calloc() returns  an  error.
By  contrast, an integer overflow would not be detected in the following call
       to malloc(), with the result that an incorrectly sized block of memory
       would be allocated:

===== Paramètres


===== Valeur de retour
The  malloc() and calloc() functions return a pointer to the allocated memory,
 which is suitably aligned for any built-in type.
On  error, these  functions return NULL.
NULL may also be returned by a successful call to calloc()
 with nmemb or size equal to zero.


===== Fonctionsexternes autorisées

*/
