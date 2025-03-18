/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:21:24 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: THINK OVER RESTRICT KEYWORD -> what if dest and sorce are the same pointer -> I don't care

// copy scr to dst n bytes not overlap -> void * dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_base;
	unsigned char	*src_base;
	size_t			idx;

	dst_base = (unsigned char *)dst;
	src_base = (unsigned char *)src;
	idx = (size_t)0;
	while (idx < n)
	{
		dst_base[idx] = src_base[idx];
		idx++;
	}
	return (dst);
}
