/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/12 11:03:33 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a-z -> A-Z
int	ft_toupper(int c)
{
	if ('a' <= c && 'z' >= c)
		c = (unsigned char)c - 32;
	return (c);
}

/* #include<stdio.h>
int	main(void)
{
	printf("->%c\n",ft_toupper('6'));
	return (0);
} */