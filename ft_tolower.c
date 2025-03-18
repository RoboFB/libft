/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:10:01 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A-Z -> a-z
int	ft_tolower(int c)
{
	if ('A' <= c && 'Z' >= c)
		c = (unsigned char)c + 32;
	return (c);
}

/* #include<stdio.h>
int	main(void)
{
	printf("->%c\n",ft_tolower('6'));
	printf("A->%c\n",ft_tolower('A'));
	printf("Z->%c\n",ft_tolower('Z'));
	printf("z->%c\n",ft_tolower('z'));
	printf("a->%c\n",ft_tolower('a'));
	printf("NULL->%c\n",ft_tolower('\0'));
	return (0);
} */