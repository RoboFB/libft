/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:32 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/20 16:40:10 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// malloc return new string that ist trimed from both sites with the char of set
char		*ft_strtrim(char const *s1, char const *set)
{
	char	*p_start;
	char	*p_end;
	char	*p_trimed;
	size_t	size_trimed;

	p_start = (char *)s1;
	p_end = (char *)(s1 + ft_strlen(s1));
	while (*p_start && ft_strchr(set, *p_start))
		p_start++;
	
	if (!(*p_start))
	{	
		size_trimed = 1;
	}
	else
	{
		while (p_end > p_start && ft_strchr(set, *p_end))
			p_end--;
		size_trimed = (size_t)(p_end - p_start + 2);
	}
	p_trimed = ft_calloc(size_trimed, sizeof(char));
	ft_strlcpy(p_trimed, p_start, size_trimed);
	
	return (p_trimed);
}