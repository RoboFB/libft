/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/10 19:43:39 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// set to NULL i len times -> return void pointer to start of string
void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, '\0', n));
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	test_str_1[7] = "1111111";
	char	test_str_2[7] = "1111111";

	printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)5),
	memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);
	// printf("%s=%s(%s=%s)\n",ft_bzero((void*)test_str_1, (size_t)5), \
	// bzero((void*)test_str_2, (size_t)5), test_str_1, test_str_2);
	write(1,test_str_1,9);
	write(1,test_str_2,9);
	return (0);
} */