/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:16:18 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int		num;
	int		negativ;
	char	*positon;


	num = 0;
	negativ = 1;
	positon = (char *) nptr;
	while (*positon == ' ' || *positon == '\f' || *positon == '\n' \
			|| *positon == '\r' || *positon == '\t' || *positon == '\v')
		positon++;
	if(*positon == '-')
	{
		negativ = -1;
		positon++;
	}
	while (*positon >= '0' && *positon <= '9')
	{
		num = num * 10 + (*positon - '0') * negativ;
		positon++;
	}
	return (num);
}
