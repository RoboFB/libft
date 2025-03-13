/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/13 14:13:42 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// 2 null terminate String -> compare
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx] && idx < n - 1)
		idx++;
	return ((int)((unsigned char)s1[idx] - (unsigned char)s2[idx]));
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char test_1[10];
	test_1[0] = 'a';
	test_1[1] = 'b';
	test_1[2] = 'c';
	test_1[3] = 'd';
	test_1[4] = '\0';
	test_1[5] = 'f';
	test_1[6] = '\0';

	char test_2[10];
	test_2[0] = 'a';
	test_2[1] = 'X';
	test_2[2] = 'c';
	test_2[3] = 'Z';
	test_2[4] = '\0';
	test_2[5] = 'f';
	test_2[6] = '\0';
	printf("->%s,%s\n", test_1,test_2);

	int res_og = strncmp(test_1,test_2,7);
	int res_my = ft_strncmp(test_1,test_2,7);
	if (res_og == res_my)
		printf("OK_og:%d-my:%d\n", res_og, res_my);
	else
		printf("Error_og:%d-my:%d\n", res_og, res_my);

	res_og = strncmp(test_1,test_2,9);
	res_my = ft_strncmp(test_1,test_2,9);
	if (res_og == res_my)
		printf("OK_og:%d-my:%d\n", res_og, res_my);
	else
		printf("Error_og:%d-my:%d\n", res_og, res_my);

	res_og = strncmp(test_1,test_2,0);
	res_my = ft_strncmp(test_1,test_2,0);
	if (res_og == res_my)
		printf("OK_og:%d-my:%d\n", res_og, res_my);
	else
		printf("Error_og:%d-my:%d\n", res_og, res_my);

	res_og = strncmp(test_1,test_2,1);
	res_my = ft_strncmp(test_1,test_2,1);
	if (res_og == res_my)
		printf("OK_og:%d-my:%d\n", res_og, res_my);
	else
		printf("Error_og:%d-my:%d\n", res_og, res_my);

	return (0);
}
