/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/10 19:14:13 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// set c in b len times -> return void pointer to start of string
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			idx;

	str = (unsigned char *)b;
	idx = (size_t)0;
	while (idx < len)
	{
		str[idx] = c;
		idx++;
	}
	return (b);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	test_str_1[4] = "";
	char	test_str_2[4] = "";

	// printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)5), \
	memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);
	printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)2), \
	memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);

	return (0);
} */