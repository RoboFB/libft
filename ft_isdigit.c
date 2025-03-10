/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/10 14:57:32 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// '0'-'9' -> return 1
int	ft_isdigit(int c)
{
	if ('0' <= c && '9' >= c)
		return (1);
	else
		return (0);
}


/* #include <limits.h>
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	printf("0->%d\n",ft_isdigit(-2345));
	printf("0->%d\n",ft_isdigit(INT_MAX));
	printf("0->%d\n",ft_isdigit('Z'));
	printf("0->%d\n",ft_isdigit('0'+256));
	printf("1->%d\n",ft_isdigit('9'));
	printf("1->%d\n",ft_isdigit('0'));

	printf("OG:\n");
	printf("0->%d\n",isdigit(-2345));
	printf("0->%d\n",isdigit(INT_MAX));
	printf("0->%d\n",isdigit('Z'));
	printf("0->%d\n",isdigit('0'+256));
	printf("1->%d\n",isdigit('9'));
	printf("1->%d\n",isdigit('0'));

	return (0);
} */