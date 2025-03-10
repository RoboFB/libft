/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/10 14:57:45 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A-Z or a-z -> return 1
int	ft_isalpha(int c)
{
	if (('A' <= c && 'Z' >= c) || ('a' <= c && 'z' >= c))
		return (1);
	else
		return (0);
}


/* #include <limits.h>
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	printf("0->%d\n",ft_isalpha(-2345));
	printf("0->%d\n",ft_isalpha(INT_MAX));
	printf("0->%d\n",ft_isalpha('0'));
	printf("0->%d\n",ft_isalpha('a'+256));
	printf("1->%d\n",ft_isalpha('H'));
	printf("1->%d\n",ft_isalpha('A'));
	printf("1->%d\n",ft_isalpha('Z'));
	printf("1->%d\n",ft_isalpha('h'));
	printf("1->%d\n",ft_isalpha('a'));
	printf("1->%d\n",ft_isalpha('z'));

	printf("OG:\n");
	printf("0->%d\n",isalpha(-2345));
	printf("0->%d\n",isalpha(INT_MAX));
	printf("0->%d\n",isalpha('0'));
	printf("0->%d\n",isalpha('a'+256));
	printf("1->%d\n",isalpha('H'));
	printf("1->%d\n",isalpha('A'));
	printf("1->%d\n",isalpha('Z'));
	printf("1->%d\n",isalpha('h'));
	printf("1->%d\n",isalpha('a'));
	printf("1->%d\n",isalpha('z'));

	return (0);
} */
