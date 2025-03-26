/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/26 15:52:50 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate a substring in a string max len return start of littel or 0 or big if len=0
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx_big;
	size_t	idx_little;
	size_t	len_little;

	idx_big = 0;
	idx_little = 0;
	if (!big)
	return (NULL);
	if (!*little)
		return ((char *)big);
	len_little = ft_strlen(little);
	if (len_little > len)
		return (NULL);
	while (big[idx_big])// && idx_big < len + 1)
	{
		if (!ft_strncmp(&big[idx_big], little, len_little))
			return ((char *)big + idx_big);
		idx_big++;

	}
	return (NULL);
}
