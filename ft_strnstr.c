/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/19 17:21:41 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate a substring in a string max len return start of littel or 0 or big if len=0
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx_big;
	size_t	idx_little;

	idx_big = 0;
	idx_little = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[idx_big] && idx_big <= len)
	{
		if (little[idx_little] == '\0')
			return ((char *)big + idx_big - idx_little);
		else if (big[idx_big] == little[idx_little])
			idx_little++;
		else
			idx_little = 0;
		idx_big++;
	}
	return (NULL);
}
