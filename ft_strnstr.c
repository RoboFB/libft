/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/17 18:07:55 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	idx_big;
	size_t	idx_little;

	idx_big = 0;
	idx_little = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[idx_big] && idx_big <= len)
	{
		if (little[idx_little] == '\0')
			return ((char *)big + idx_big - idx_little);
		else if (big[idx_big] == little[idx_little])
			idx_little++;
		else
			idx_little = 0;
		idx_big++;
	}
	return (NULL);
}

/* #include <string.h>
#include <stdio.h>

int main(void)
{
	char	big[10];
	char	littel[10];


	strcpy(big,"1234567");
	strcpy(littel,"12");
	char* my = ft_strnstr(big,littel,2);
	char* og = strstr(big,littel);
	printf("my:%sg:%p\n",my,og);



	return (0);
} */