/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:18:29 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// last char c or not found = Null make sure that null terminatet
char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = (char *)s;
	while (*find != '\0')
		find++;
	if ((char)c == '\0')
		return (find);
	while (find != s)
	{
		find--;
		if (*find == (char)c)
			return (find);
	}
	return (NULL);
}
