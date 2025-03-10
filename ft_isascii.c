/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/10 15:10:02 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// 0-127 NUL - DEL -> return 1
int	ft_isascii(int c)
{
	if (0 <= c && 127 >= c)
		return (1);
	else
		return (0);
}


#include <limits.h>
#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("0->%d\n",ft_isascii(-2345));
	printf("0->%d\n",ft_isascii(INT_MAX));
	printf("0->%d\n",ft_isascii('0'+256));
	printf("1->%d\n",ft_isascii(0));
	printf("1->%d\n",ft_isascii('A'));
	printf("1->%d\n",ft_isascii('Z'));
	printf("1->%d\n",ft_isascii('a'));
	printf("1->%d\n",ft_isascii('z'));
	printf("1->%d\n",ft_isascii('0'));
	printf("1->%d\n",ft_isascii('9'));
	printf("1->%d\n",ft_isascii('#'));
	printf("1->%d\n",ft_isascii(' '));
	printf("1->%d\n",ft_isascii('\n'));
	printf("1->%d\n",ft_isascii(127));

	printf("OG:\n");
	printf("0->%d\n",isascii(-2345));
	printf("0->%d\n",isascii(INT_MAX));
	printf("0->%d\n",isascii('0'+256));
	printf("1->%d\n",isascii(0));
	printf("1->%d\n",isascii('A'));
	printf("1->%d\n",isascii('Z'));
	printf("1->%d\n",isascii('a'));
	printf("1->%d\n",isascii('z'));
	printf("1->%d\n",isascii('0'));
	printf("1->%d\n",isascii('9'));
	printf("1->%d\n",isascii('#'));
	printf("1->%d\n",isascii(' '));
	printf("1->%d\n",isascii('\n'));
	printf("1->%d\n",isascii(127));

	return (0);
}