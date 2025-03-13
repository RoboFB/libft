/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:18:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/13 10:47:28 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// fist char c or not found = Null make sure that null terminatet
char	*ft_strchr(const char *s, int c)
{
	char	*find;

	find = (char *)s;
	while (*find != '\0')
	{
		if (*find == (char)c)
			return (find);
		else
			find++;
	}
	if ((char)c == '\0')
		return (find);
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
	test_s[4] = '\0';
	test_s[5] = 'f';
	test_s[6] = '\0';
	// printf("og->%p\n", test_s);
	// printf("a ->%p\n", strrchr(test_s,'a'));
	// printf("b ->%p\n", strrchr(test_s,'b'));
	// printf("d ->%p\n", strrchr(test_s,'d'));
	// printf("x ->%p\n", strrchr(test_s,'x'));
	// printf("N ->%p\n\n", strrchr(test_s,'\0'));

	// printf("og->%p\n", test_s);
	// printf("a ->%p\n", ft_strchr(test_s,'a'));
	// printf("b ->%p\n", ft_strchr(test_s,'b'));
	// printf("d ->%p\n", ft_strchr(test_s,'d'));
	// printf("x ->%p\n", ft_strchr(test_s,'x'));
	// printf("N ->%p\n", ft_strchr(test_s,'\0'));


	char *ar = "abcdef\0";
	
	
	int i;
	for (i = 0; i < 10; i++)
	{
		if(ft_strchr(test_s,ar[i]) == strchr(test_s,ar[i]))
		{
			printf("fine_");
			printf("%c>%p-%p\n", ar[i], ft_strchr(test_s,ar[i]), strchr(test_s,ar[i]));
		}	
		else
		{
			printf("error_");
			printf("%c>%p-%p\n", ar[i], ft_strchr(test_s,ar[i]), strchr(test_s,ar[i]));
		}
		
	}
	return (0);
}