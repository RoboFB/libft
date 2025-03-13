/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/13 16:12:13 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_strlen.c"

// dstsize > strlen(dst) + 1 -> max strlen(src)
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	len_dst;
	size_t	idx_src;

	len_dst = ft_strlen(dst);
	idx_src = 0;

	while (src[idx_src] && dstsize > len_dst + 1)
	{
		dst[len_dst + idx_src] = src[idx_src];
		idx_src++;
	}
	if (dstsize >= 1)
		dst[len_dst + idx_src] = '\0';

	return (len_dst + ft_strlen(src));
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char test_1[10];
	char test_2[10];
	char test_3[10];

	strlcpy(test_1,"123",4);
	strlcpy(test_2,"123",4);
	strlcpy(test_3,"4444",5);
	printf("->%s,%s\n", test_1,test_2);

	size_t res_og = strlcat(test_1,test_3,8);
	size_t res_my = ft_strlcat(test_2,test_3,8);
	if (res_og == res_my)
		printf("OK_og:%s-my:%s,%lu,%lu\n", test_1, test_2,res_og,res_my);
	else
		printf("Error_og:%s-my:%s,%lu,%lu\n",  test_1, test_2,res_og,res_my);

	
	return (0);
}
