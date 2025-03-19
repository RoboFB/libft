/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/19 20:40:09 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize=char len + '\0' -> Full size of dst copys dsrsize -1 for Null
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		idx;

	idx = 0;
	while (src[idx] && dstsize > idx + 1)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize > 0)
		dst[idx] = '\0';

	return (ft_strlen(src));
}
