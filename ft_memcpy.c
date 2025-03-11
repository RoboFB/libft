/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/11 11:45:19 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// TODO: THINK OVER RESTRICT KEYWORD -> what if dest and sorce are the same pointer -> I don't care

// set to NULL i len times -> return void pointer to start of string
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_base;
	unsigned char	*src_base;
	size_t			idx;

	dst_base = (unsigned char *)dst;
	src_base = (unsigned char *)src;
	idx = (size_t)0;
	while (idx < n)
	{
		dst_base[idx] = src_base[idx];
		idx++;
	}
	return (dst);
}

/* //TODO: Fix Test latern make them nice!!!
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char	dest[10];
	char	src[10];

	strcpy(dest,"dddd");
	strcpy(src, "ssss");

	printf("%s\n",memcpy(dest+1,dest,1));


	char	dest_2[10];
	char	src_2[10];

	strcpy(dest_2,"dddd");
	strcpy(src_2, "ssss");

	printf("%s\n",ft_memcpy(dest_2+1,dest_2,1));

	long	dest_3;
	long	src_3;

	dest_3 = 2222222222222222;
	src_3 = 1111111111111111;

	printf("%ld\n",*(char*)ft_memcpy(&dest_3,&src_3,4));
	return (0);
} */