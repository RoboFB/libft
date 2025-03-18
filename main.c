/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:15:22 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/18 15:36:16 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include<ctype.h>

int	main(void)
{
	
	return (0);
}


int	test_ft_atoi(void)
{
	char buffer[30];

	strcpy(buffer, "          \v\v\v\v    1234");
	printf("1=%i__%d=%d\n", (atoi(buffer) == ft_atoi(buffer)), atoi(buffer), ft_atoi(buffer));

	strcpy(buffer, "1234");
	printf("1=%i__%d=%d\n", (atoi(buffer) == ft_atoi(buffer)), atoi(buffer), ft_atoi(buffer));

	strcpy(buffer, "2147483647");
	printf("1=%i__%d=%d\n", (atoi(buffer) == ft_atoi(buffer)), atoi(buffer), ft_atoi(buffer));

	strcpy(buffer, "-2147483648");
	printf("1=%i__%d=%d\n", (atoi(buffer) == ft_atoi(buffer)), atoi(buffer), ft_atoi(buffer));
	
	strcpy(buffer, "-2147");
	printf("1=%i__%d=%d\n", (atoi(buffer) == ft_atoi(buffer)), atoi(buffer), ft_atoi(buffer));

	strcpy(buffer, "98765323");
	printf("1=%i__%d=%d\n", (atoi(buffer) == ft_atoi(buffer)), atoi(buffer), ft_atoi(buffer));

	return (0);
}


int	test_ft_memset(void)
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
}

int	test_ft_isalnum(void)
{
	printf("0->%d\n",ft_isalnum(-2345));
	printf("0->%d\n",ft_isalnum(INT_MAX));
	printf("0->%d\n",ft_isalnum('0'+256));
	printf("1->%d\n",ft_isalnum('A'));
	printf("1->%d\n",ft_isalnum('Z'));
	printf("1->%d\n",ft_isalnum('a'));
	printf("1->%d\n",ft_isalnum('z'));
	printf("1->%d\n",ft_isalnum('0'));
	printf("1->%d\n",ft_isalnum('9'));

	printf("OG:\n");
	printf("0->%d\n",isalnum(-2345));
	printf("0->%d\n",isalnum(INT_MAX));
	printf("0->%d\n",isalnum('0'+256));
	printf("1->%d\n",isalnum('A'));
	printf("1->%d\n",isalnum('Z'));
	printf("1->%d\n",isalnum('a'));
	printf("1->%d\n",isalnum('z'));
	printf("1->%d\n",isalnum('0'));
	printf("1->%d\n",isalnum('9'));

	return (0);
}

int test_ft_isalpha(void)
{
	printf("0->%d\n",ft_isalpha(-2345));
	printf("0->%d\n",ft_isalpha(INT_MAX));
	printf("0->%d\n",ft_isalpha('0'));
	printf("0->%d\n",ft_isalpha('a'+256));
	printf("1->%d\n",ft_isalpha('H'));
	printf("1->%d\n",ft_isalpha('A'));
	printf("1->%d\n",ft_isalpha('Z'));
	printf("1->%d\n",ft_isalpha('h'));
	printf("1->%d\n",ft_isalpha('a'));
	printf("1->%d\n",ft_isalpha('z'));

	printf("OG:\n");
	printf("0->%d\n",isalpha(-2345));
	printf("0->%d\n",isalpha(INT_MAX));
	printf("0->%d\n",isalpha('0'));
	printf("0->%d\n",isalpha('a'+256));
	printf("1->%d\n",isalpha('H'));
	printf("1->%d\n",isalpha('A'));
	printf("1->%d\n",isalpha('Z'));
	printf("1->%d\n",isalpha('h'));
	printf("1->%d\n",isalpha('a'));
	printf("1->%d\n",isalpha('z'));

	return (0);
}

int	test_ft_toupper(void)
{
	printf("->%c\n",ft_toupper('6'));
	return (0);
}


int	test_ft_tolower(void)
{
	printf("->%c\n",ft_tolower('6'));
	printf("A->%c\n",ft_tolower('A'));
	printf("Z->%c\n",ft_tolower('Z'));
	printf("z->%c\n",ft_tolower('z'));
	printf("a->%c\n",ft_tolower('a'));
	printf("NULL->%c\n",ft_tolower('\0'));
	return (0);
}


int	test_ft_strrchr(void)
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



int test_ft_strnstr(void)
{
	char	big[10];
	char	littel[10];


	strcpy(big,"1234567");
	strcpy(littel,"12");
	char* my = ft_strnstr(big,littel,2);
	char* og = strstr(big,littel);
	printf("my:%sg:%p\n",my,og);



	return (0);
}



int	test_ft_strncmp(void)
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


int	test_ft_strlen(void)
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
}


int test_ft_strlcpy(void)
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



int	test_ft_strlcat(void)
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


int	test_ft_strchr(void)
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


int	test_ft_memset(void)
{
	char	test_str_1[4] = "";
	char	test_str_2[4] = "";

	// printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)5), \
	memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);
	printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)2), \
	memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);

	return (0);
}

int test_ft_memmove(void)
{
	char	dest[10];

	// strcpy(dest,"1234567");
	// memcpy(dest+1,dest+2,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// memmove(dest+1,dest+2,4);
	// printf("%s\n",dest);

	strcpy(dest,"1234567");
	ft_memmove(dest+1,dest+2,4);
	printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// memcpy(dest+2,dest+1,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// memmove(dest+2,dest+1,4);
	// printf("%s\n",dest);

	strcpy(dest,"1234567");
	ft_memmove(dest+2,dest+1,4);
	printf("%s\n",dest);


	// strcpy(dest,"1234567");
	// memcpy(dest+1,dest+1,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// memmove(dest+1,dest+1,4);
	// printf("%s\n",dest);

	strcpy(dest,"1234567");
	ft_memmove(dest+1,dest+1,4);
	printf("%s\n",dest);

	return (0);
}



int test_ft_memcpy_1(void)
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
}


int test_ft_memcpy_2(void)
{
	char	dest[10];

	strcpy(dest,"1234567");
	memcpy(dest+1,dest+2,4);
	printf("%s\n",dest);

	strcpy(dest,"1234567");
	memmove(dest+1,dest+2,4);
	printf("%s\n",dest);

	strcpy(dest,"1234567");
	ft_memcpy(dest+1,dest+2,4);
	printf("%s\n",dest);


	strcpy(dest,"1234567");
	memcpy(dest+2,dest+1,4);
	printf("%s\n",dest);

	strcpy(dest,"1234567");
	memmove(dest+2,dest+1,4);
	printf("%s\n",dest);

	strcpy(dest,"1234567");
	ft_memcpy(dest+2,dest+1,4);
	printf("%s\n",dest);


	return (0);
}


int	test_ft_isprint(void)
{
	printf("0->%d\n",ft_isprint(-2345));
	printf("0->%d\n",ft_isprint(INT_MAX));
	printf("0->%d\n",ft_isprint('0'+256));
	printf("0->%d\n",ft_isprint(127));
	printf("0->%d\n",ft_isprint('\n'));
	printf("1->%d\n",ft_isprint(39));
	printf("1->%d\n",ft_isprint('A'));
	printf("1->%d\n",ft_isprint('Z'));
	printf("1->%d\n",ft_isprint('a'));
	printf("1->%d\n",ft_isprint('z'));
	printf("1->%d\n",ft_isprint('0'));
	printf("1->%d\n",ft_isprint('9'));
	printf("1->%d\n",ft_isprint('#'));
	printf("1->%d\n",ft_isprint(' '));

	printf("OG:\n");
	printf("0->%d\n",isprint(-2345));
	printf("0->%d\n",isprint(INT_MAX));
	printf("0->%d\n",isprint('0'+256));
	printf("0->%d\n",isprint(127));
	printf("0->%d\n",isprint('\n'));
	printf("1->%d\n",isprint(39));
	printf("1->%d\n",isprint('A'));
	printf("1->%d\n",isprint('Z'));
	printf("1->%d\n",isprint('a'));
	printf("1->%d\n",isprint('z'));
	printf("1->%d\n",isprint('0'));
	printf("1->%d\n",isprint('9'));
	printf("1->%d\n",isprint('#'));
	printf("1->%d\n",isprint(' '));
	return (0);
}


int test_ft_isdigit(void)
{
	printf("0->%d\n",ft_isdigit(-2345));
	printf("0->%d\n",ft_isdigit(INT_MAX));
	printf("0->%d\n",ft_isdigit('Z'));
	printf("0->%d\n",ft_isdigit('0'+256));
	printf("1->%d\n",ft_isdigit('9'));
	printf("1->%d\n",ft_isdigit('0'));

	printf("OG:\n");
	printf("0->%d\n",isdigit(-2345));
	printf("0->%d\n",isdigit(INT_MAX));
	printf("0->%d\n",isdigit('Z'));
	printf("0->%d\n",isdigit('0'+256));
	printf("1->%d\n",isdigit('9'));
	printf("1->%d\n",isdigit('0'));

	return (0);
}

int	test_ft_isascii(void)
{
	printf("0->%d\n",ft_isascii(-2345));
	printf("0->%d\n",ft_isascii(INT_MAX));
	printf("0->%d\n",ft_isascii('0'+256));
	printf("1->%d\n",ft_isascii(0));
	printf("1->%d\n",ft_isascii('A'));
	printf("1->%d\n",ft_isascii('Z'));
	printf("1->%d\n",ft_isascii('a'));
	printf("1->%d\n",ft_isascii('z'));
	printf("1->%d\n",ft_isascii('0'));
	printf("1->%d\n",ft_isascii('9'));
	printf("1->%d\n",ft_isascii('#'));
	printf("1->%d\n",ft_isascii(' '));
	printf("1->%d\n",ft_isascii('\n'));
	printf("1->%d\n",ft_isascii(127));

	printf("OG:\n");
	printf("0->%d\n",isascii(-2345));
	printf("0->%d\n",isascii(INT_MAX));
	printf("0->%d\n",isascii('0'+256));
	printf("1->%d\n",isascii(0));
	printf("1->%d\n",isascii('A'));
	printf("1->%d\n",isascii('Z'));
	printf("1->%d\n",isascii('a'));
	printf("1->%d\n",isascii('z'));
	printf("1->%d\n",isascii('0'));
	printf("1->%d\n",isascii('9'));
	printf("1->%d\n",isascii('#'));
	printf("1->%d\n",isascii(' '));
	printf("1->%d\n",isascii('\n'));
	printf("1->%d\n",isascii(127));

	return (0);
}
