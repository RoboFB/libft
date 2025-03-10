/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/10 15:28:54 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// FIX LATER:
#include"ft_isalpha.c"
#include"ft_isdigit.c"

// A-Z or a-z or '0'-'9' -> return 1
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// #include <limits.h>
// #include<stdio.h>
// #include<ctype.h>
// int	main(void)
// {
// 	printf("0->%d\n",ft_isalnum(-2345));
// 	printf("0->%d\n",ft_isalnum(INT_MAX));
// 	printf("0->%d\n",ft_isalnum('0'+256));
// 	printf("1->%d\n",ft_isalnum('A'));
// 	printf("1->%d\n",ft_isalnum('Z'));
// 	printf("1->%d\n",ft_isalnum('a'));
// 	printf("1->%d\n",ft_isalnum('z'));
// 	printf("1->%d\n",ft_isalnum('0'));
// 	printf("1->%d\n",ft_isalnum('9'));

// 	printf("OG:\n");
// 	printf("0->%d\n",isalnum(-2345));
// 	printf("0->%d\n",isalnum(INT_MAX));
// 	printf("0->%d\n",isalnum('0'+256));
// 	printf("1->%d\n",isalnum('A'));
// 	printf("1->%d\n",isalnum('Z'));
// 	printf("1->%d\n",isalnum('a'));
// 	printf("1->%d\n",isalnum('z'));
// 	printf("1->%d\n",isalnum('0'));
// 	printf("1->%d\n",isalnum('9'));

// 	return (0);
// }