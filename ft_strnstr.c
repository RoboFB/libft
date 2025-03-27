/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/27 11:31:43 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate a needel in a hay string, max len ->return needel start or 0 or big if littel emty
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx_big;
	size_t	idx_lit;
	// size_t	len_little;

	idx_big = 0;
	if (!big)
		return (NULL);
	if (!*little)
		return ((char *)big);
	// len_little = ft_strlen(little);
	// if (len_little > len)
	// 	return (NULL);
	while (big[idx_big])// && idx_big < len + 1) ??? +1 ??? (idx_big + idx_lit) < len ???
	{
		idx_lit = 0;
		while (big[idx_big + idx_lit] && little[idx_lit]
			&& big[idx_big + idx_lit] == little[idx_lit]
			&& (idx_big + idx_lit) < len)
		{
			idx_lit++;
		}
		if (!little[idx_lit])
			return ((char *)big + idx_big);
		idx_big++;
	}
	return (NULL);
}

// if (!ft_strncmp(&big[idx_big], little, len_little))