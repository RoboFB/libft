/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:09:56 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// last char c or not found = Null make sure that null terminatet
char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = (char *)s;
	while (*find != '\0')
		find++;
	if ((char)c == '\0')
		return (find);
	while (find != s)
	{
		find--;
		if (*find == (char)c)
			return (find);
	}
	return (NULL);
}

#include <stdio.h>
#include<string.h>
int	main(void)
{
	char	test_s[10];
	test_s[0] = 'a';
	test_s[1] = 'b';
	test_s[2] = 'c';
	test_s[3] = 'd';
	test_s[4] = 'e';
	test_s[5] = 'f';
	test_s[6] = '\0';
	printf("og->%p\n", test_s);
	printf("a ->%p\n", strrchr(test_s,'a'));
	printf("b ->%p\n", strrchr(test_s,'b'));
	printf("d ->%p\n", strrchr(test_s,'d'));
	printf("x ->%p\n", strrchr(test_s,'x'));
	printf("N ->%p\n\n", strrchr(test_s,'\0'));

	printf("og->%p\n", test_s);
	printf("a ->%p\n", ft_strrchr(test_s,'a'));
	printf("b ->%p\n", ft_strrchr(test_s,'b'));
	printf("d ->%p\n", ft_strrchr(test_s,'d'));
	printf("x ->%p\n", ft_strrchr(test_s,'x'));
	printf("N ->%p\n", ft_strrchr(test_s,'\0'));

	
	char *ar = "abcdef\0";
	
	
	int i;
	for (i = 0; i < 10; i++)
	{
		if(ft_strrchr(test_s,ar[i]) == strrchr(test_s,ar[i]))
		{
			printf("fine_");
			printf("%c>%p-%p\n", ar[i], ft_strrchr(test_s,ar[i]), strrchr(test_s,ar[i]));
		}	
		else
		{
			printf("error_");
			printf("%c>%p-%p\n", ar[i], ft_strrchr(test_s,ar[i]), strrchr(test_s,ar[i]));
		}
		
	}
	return (0);
}