/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:19:47 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fist char c or not found = Null make sure that null terminatet
char	*ft_strchr(const char *s, int c)
{
	char	*find;

	find = (char *)s;
	while (*find != '\0')
	{
		if (*find == (char)c)
			return (find);
		else
			find++;
	}
	if ((char)c == '\0')
		return (find);
	return (NULL);
}
