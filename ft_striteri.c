/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:24 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/24 13:32:18 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	idx;

	idx = 0;
	while (s[idx])
	{
		f(idx, s +idx);
		idx++;
	}
	return;
}

// int	main(void)
// {
// 	ft_strmapi(1, ft_strchr());
	
// 	return (0);
// }