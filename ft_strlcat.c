/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:19:34 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize > strlen(dst) + 1 -> max strlen(src)
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	len_dst;
	size_t	idx_src;

	len_dst = ft_strlen(dst);
	idx_src = 0;

	while (src[idx_src] && dstsize > len_dst + 1)
	{
		dst[len_dst + idx_src] = src[idx_src];
		idx_src++;
	}
	if (dstsize >= 1)
		dst[len_dst + idx_src] = '\0';

	return (len_dst + ft_strlen(src));
}



