/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:20:41 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// move scr to dst n bytes can overlap -> void * dst
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_base;
	unsigned char	*src_base;
	size_t			idx;

	dst_base = (unsigned char *)dst;
	src_base = (unsigned char *)src;
	idx = (size_t)0;
	if (dst < src)
	{
		while (idx < len)
		{
			dst_base[idx] = src_base[idx];
			idx++;
		}
	}
	else
	{
		idx = len;
		while (idx)
		{
			idx--;
			dst_base[idx] = src_base[idx];
		}
	}
	return (dst);
}
