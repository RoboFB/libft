/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/19 14:25:35 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Malloc nelem * elsize whit zero, return Void Pointer to location or Null on error
void		*ft_calloc(size_t nelem, size_t elsize)
{
	void	*location;

	if (nelem && elsize > (size_t)-1 / nelem)
		return (NULL); // i hvae no idee if i really need that?

	location = malloc(nelem * elsize);
	if (location == NULL)
		return (NULL);
	ft_bzero(location, nelem * elsize);

	return (location);
}