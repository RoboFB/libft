/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:09:10 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 32-126 Space-'~' -> return 1
int	ft_isprint(int c)
{
	if (' ' <= c && '~' >= c)
		return (1);
	else
		return (0);
}

/* #include <limits.h>
#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("0->%d\n",ft_isprint(-2345));
	printf("0->%d\n",ft_isprint(INT_MAX));
	printf("0->%d\n",ft_isprint('0'+256));
	printf("0->%d\n",ft_isprint(127));
	printf("0->%d\n",ft_isprint('\n'));
	printf("1->%d\n",ft_isprint(39));
	printf("1->%d\n",ft_isprint('A'));
	printf("1->%d\n",ft_isprint('Z'));
	printf("1->%d\n",ft_isprint('a'));
	printf("1->%d\n",ft_isprint('z'));
	printf("1->%d\n",ft_isprint('0'));
	printf("1->%d\n",ft_isprint('9'));
	printf("1->%d\n",ft_isprint('#'));
	printf("1->%d\n",ft_isprint(' '));

	printf("OG:\n");
	printf("0->%d\n",isprint(-2345));
	printf("0->%d\n",isprint(INT_MAX));
	printf("0->%d\n",isprint('0'+256));
	printf("0->%d\n",isprint(127));
	printf("0->%d\n",isprint('\n'));
	printf("1->%d\n",isprint(39));
	printf("1->%d\n",isprint('A'));
	printf("1->%d\n",isprint('Z'));
	printf("1->%d\n",isprint('a'));
	printf("1->%d\n",isprint('z'));
	printf("1->%d\n",isprint('0'));
	printf("1->%d\n",isprint('9'));
	printf("1->%d\n",isprint('#'));
	printf("1->%d\n",isprint(' '));
	return (0);
} */