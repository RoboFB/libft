/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:20:23 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// set c in b len times -> return void pointer to start of data
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*base;
	size_t			idx;

	base = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		base[idx] = (unsigned char)c;
		idx++;
	}
	return (b);
}
