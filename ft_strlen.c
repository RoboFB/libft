/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/17 13:39:40 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// null terminated! -> num of characters/ idx of '\0' == as size_t
size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
lalaalalalal Timo war hier 

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*test_str;

	test_str = "1";
	printf("%zu=%zu(%s)\n",ft_strlen(test_str), strlen(test_str), test_str);
	test_str = "234563423423rg 45y4y3h89t gn94t93 ";
	printf("%zu=%zu(%s)\n",ft_strlen(test_str), strlen(test_str), test_str);
	test_str = "";
	printf("%zu=%zu(%s)\n",ft_strlen(test_str), strlen(test_str), test_str);
	test_str = "\0";
	printf("%zu=%zu(%s)\n",ft_strlen(test_str), strlen(test_str), test_str);
	test_str = "aaa\0bbb";
	printf("%zu=%zu(%s)\n",ft_strlen(test_str), strlen(test_str), test_str);
	return (0);
} */