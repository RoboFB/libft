/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:35 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/25 18:31:57 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// malloc new_substr, source str, start idx, len(chars) return new *str
char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_substr;
	char const	*p_start_old;
	size_t		real_len;
	

	// wenn start groeser ist wie nach dem null terminator hab ich einen fehler return null
	if (start > ft_strlen(s))
	{
		real_len = 0;
	}
	
	p_start_old = s + start;
	
	real_len = 0;
	while (p_start_old[real_len] && real_len < len)
		real_len++;
	
	new_substr = ft_calloc(real_len + 1, sizeof(char));
	if (new_substr == NULL)
		return (NULL);
	
	ft_strlcpy(new_substr, p_start_old, real_len + 1);
	return (new_substr);
}
