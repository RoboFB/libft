/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/27 11:47:10 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// scan byts s to find byt c in n positions -> return Poiter or Null
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*str;

	idx = 0;
	str = (unsigned char *)s;
	while (idx < n)
	{
		if ((unsigned char)str[idx] == (unsigned char)c)
			return (str + idx);
		idx++;
	}
	return (NULL);
}
