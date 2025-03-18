/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:09:44 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize -> Full size of dst copys dsrsize -1 for Null
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		idx;

	idx = 0;

	while (src[idx] && dstsize > idx + 1)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize >= 1)
		dst[idx] = '\0';

	return (ft_strlen(src));
}

#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	// char	src[5];
	char	dest[9];
	bzero(dest,9);
	char	dest_2[9];
	bzero(dest_2,9);
	
	// printf("P1:%p",dest
	if (strlcpy(dest,"abc",2)==ft_strlcpy(dest_2,"abc",2))
		printf("OK:%s.%s\n", dest, dest_2);
	if (strlcpy(dest,"abc",4)==ft_strlcpy(dest_2,"abc",4))
		printf("OK:%s.%s\n", dest, dest_2);
	if (strlcpy(dest,"abcdefghijklmno",9)==ft_strlcpy(dest_2,"abcdefghijklmno",9))
		printf("OK:%s.%s\n", dest, dest_2);

	const char src[0] = {};
	if (strlcpy(dest,src,9)==ft_strlcpy(dest_2,src,9))
		printf("OK:%s.%s\n", dest, dest_2);
	
	// printf("len>%lu\n",strlcpy(dest,src,7));
	// strcpy(dest,"1234567");
	// ft_memmove(dest+1,dest+1,4);
	// printf("%s\n",dest);
	return (0);
}