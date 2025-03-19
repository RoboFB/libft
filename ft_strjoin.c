/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:27 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/19 21:03:46 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// malloc string1 +string2 return new Long string3
char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	total_size;
	char	*joined;

	len_s1 = ft_strlen(s1);
	total_size = len_s1 + ft_strlen(s2) + 1;
	joined = ft_calloc(total_size, sizeof(char));
	if (joined == NULL)
		return (NULL);
	
	ft_strlcpy(joined, s1, total_size);
	ft_strlcpy(joined + len_s1, s2, total_size - len_s1);
	return (joined);
}