/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:09:13 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// find byte in size
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	len;
	char	*idx;

	idx = (char *)s;
	while (len < n)
	{
		if (*idx == (unsigned char)c)
			return ((void *)idx);
		len++;
		idx++;
	}
	return (NULL);
}