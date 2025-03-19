/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:35 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/19 19:56:40 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// malloc substr, source str, start idx, len(chars) return new *str
char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}