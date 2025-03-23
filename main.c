/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:15:22 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/23 22:36:34 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include<ctype.h>



int test_ft_isalpha(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	int tc[20] = {-300, -100, 30, 40, 50,70,150, 0,'A','a','Z','z'};
	for(int i = 0; i<20;i++)
	{
		if((ft_isalpha(tc[i]) == 0) == (isalpha(tc[i]) == 0))
		{
			pass++;
		}
		else
		{
			fail++;
			printf("!!!Failed at:%d_%d=%d\n", tc[i],ft_isalpha(tc[i]), isalpha(tc[i]));
		}
	}
	printf("ft_isalpha pass:%d  fail:%d\n",pass, fail);
	return (fail);

	// printf("0->%d\n",ft_isalpha(INT_MAX));
	// printf("0->%d\n",ft_isalpha(INT_MIN));

	// printf("0->%d\n",isalpha(INT_MAX));
	// printf("0->%d\n",isalpha(INT_MIN));

}


int test_ft_isdigit(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	int tc[20] = {-300, -100, 30, 40, 50,70,150, 0,'A','a','Z','z','9'+1,'5','9','0','0'-1};
	for(int i = 0; i<20;i++)
	{
		if((ft_isdigit(tc[i]) == 0) == (isdigit(tc[i]) == 0))
			pass++;
		else
		{
			fail++;
			printf("!!!Failed at:%d_%d=%d\n", tc[i],ft_isdigit(tc[i]), isdigit(tc[i]));
		}
	}
	printf("ft_isdigit pass:%d  fail:%d\n",pass, fail);

	return (fail);

	// printf("0->%d\n",ft_isdigit(INT_MAX));
	// printf("0->%d\n",ft_isdigit(INT_MIN));
	
	// printf("0->%d\n",isdigit(INT_MAX));
	// printf("0->%d\n",isdigit(INT_MIN));
}

int	test_ft_isalnum(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	int tc[20] = {-300, -100, 30, 40, 50,70,150, 0,'A','a','Z','z','9'+1,'5','9','0','0'-1};
	for(int i = 0; i<20;i++)
	{
		if((ft_isalnum(tc[i]) == 0) == (isalnum(tc[i]) == 0))
			pass++;
		else
		{
			fail++;
			printf("!!!Failed at:%d_%d=%d\n", tc[i],ft_isalnum(tc[i]), isalnum(tc[i]));
		}
	}
	printf("ft_isalnum pass:%d  fail:%d\n",pass, fail);

	return (fail);

	// printf("0->%d\n",ft_isdigit(INT_MAX));
	// printf("0->%d\n",ft_isdigit(INT_MIN));
	
	// printf("0->%d\n",isdigit(INT_MAX));
	// printf("0->%d\n",isdigit(INT_MIN));
}


int	test_ft_isascii(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	int tc[20] = {-300, -100, 127, 130, 128,70,150, 0,'A','a','Z','z','9'+1,'5','9','0','0'-1};
	for(int i = 0; i<20;i++)
	{
		if((ft_isascii(tc[i]) == 0) == (isascii(tc[i]) == 0))
			pass++;
		else
		{
			fail++;
			printf("!!!Failed at:%d_%d=%d\n", tc[i],ft_isascii(tc[i]), isascii(tc[i]));
		}
	}
	printf("ft_isascii pass:%d  fail:%d\n",pass, fail);

	return (fail);

	// printf("0->%d\n",ft_isdigit(INT_MAX));
	// printf("0->%d\n",ft_isdigit(INT_MIN));
	
	// printf("0->%d\n",isdigit(INT_MAX));
	// printf("0->%d\n",isdigit(INT_MIN));
}


// TODO what is whit -400 and the orinall going on nice for me i hobe
// TODO what is whit -400 and the orinall going on nice for me i hobe
// TODO what is whit -400 and the orinall going on nice for me i hobe
// TODO what is whit -400 and the orinall going on nice for me i hobe

int	test_ft_isprint(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	int tc[20] = {-300, -100, 127, 130, 128,70,150, 0,'A','a','Z','z','9'+1,'5','9','0','0'-1};
	for(int i = 0; i<20;i++)
	{
		if((ft_isprint(tc[i]) == 0) == (isprint(tc[i]) == 0))
			pass++;
		else
		{
			fail++;
			printf("!!!Failed at:%d_%d=%d\n", tc[i],ft_isprint(tc[i]), isprint(tc[i]));
		}
	}
	for(int x = -400; x<400;x++)
	{
		if((ft_isprint(x) == 0) == (isprint(x) == 0))
			pass++;
		else
		{
			fail++;
			printf("!!!Failed at:%d_%d=%d\n", x,ft_isprint(x), isprint(x));
		}
	}
	printf("ft_isprint pass:%d  fail:%d\n",pass, fail);

	return (fail);

	// printf("0->%d\n",ft_isdigit(INT_MAX));
	// printf("0->%d\n",ft_isdigit(INT_MIN));
	
	// printf("0->%d\n",isdigit(INT_MAX));
	// printf("0->%d\n",isdigit(INT_MIN));
}


// ---------------------------------------------------------------------



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


int	test_ft_memset_1(void)
{
	char	test_str_1[10] = "1111111";
	char	test_str_2[10] = "1111111";

	// printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)5),
	// memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);
	// printf("%s=%s(%s=%s)\n",ft_bzero((void*)test_str_1, (size_t)5),
	// bzero((void*)test_str_2, (size_t)5), test_str_1, test_str_2);
	write(1,test_str_1,9);
	write(1,test_str_2,9);
	return (0);
}


int	test_ft_memset_2(void)
{
	// char	test_str_1[4] = "";
	// char	test_str_2[4] = "";

	// printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)5), memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);
	// printf("%s=%s(%s=%s)\n",ft_memset((void*)test_str_1, 'X', (size_t)2), memset((void*)test_str_2, 'X', (size_t)5), test_str_1, test_str_2);

	return (0);
}


int	test_ft_bzero(void)
{

	return (0);
}


int test_ft_memcpy_1(void)
{
	char	dest[10];
	char	src[10];

	strcpy(dest,"dddd");
	strcpy(src, "ssss");

	printf("%s\n",(char*)memcpy(dest+1,dest,1));


	char	dest_2[10];
	char	src_2[10];

	strcpy(dest_2,"dddd");
	strcpy(src_2, "ssss");

	printf("%s\n",(char*)ft_memcpy(dest_2+1,dest_2,1));

	long	dest_3;
	long	src_3;

	dest_3 = 2222222222222222;
	src_3 = 1111111111111111;

	printf("%s\n",(char*)ft_memcpy(&dest_3,&src_3,4));
	return (0);
}


int test_ft_memcpy_2(void)
{
	// char	dest[10];

	// strcpy(dest,"1234567");
	// memcpy(dest+1,dest+2,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// memmove(dest+1,dest+2,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// ft_memcpy(dest+1,dest+2,4);
	// printf("%s\n",dest);


	// strcpy(dest,"1234567");
	// memcpy(dest+2,dest+1,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// memmove(dest+2,dest+1,4);
	// printf("%s\n",dest);

	// strcpy(dest,"1234567");
	// ft_memcpy(dest+2,dest+1,4);
	// printf("%s\n",dest);


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

// ---------------------------------------------------------------------

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


int test_ft_memcmp(void)
{
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


int	test_ft_calloc(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	size_t tc1[9] = {-300, -100, 0, 1, 0, 3, 127, 130, 1};
	size_t tc2[9] = { 100,  300, 0, 0, 1, 3, 127, 1,   1000};
	size_t res[9] = { 0,     0,  1, 1, 1, 1, 1,   1,   1};
	for(int i = 0; i<9;i++)
	{
		void * check = ft_calloc(tc1[i],tc2[i]);
		if ( (!res[i] && check == NULL) 
		|| (res[i] && (tc1[i]*tc2[i]) && ((char *)check)[(tc1[i]*tc2[i])-1] == 0)
		|| (res[i] && !(tc1[i]*tc2[i]) && check != 0))
		{
			pass++;
		}
		else
		{
			printf("!!!Failed at ft_calloc:__%p__%zu__%zu__\n", check, tc1[i],tc2[i]);
			fail++;
		}
		free(check);

	}
	printf("test_ft_calloc pass:%d  fail:%d\n",pass, fail);
	return (fail);


	return (0);

}


int	test_ft_strdup(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	char* tc[4] = {"abc","def","","45y4554\n\ty"};
	for(int i = 0; i<4;i++)
	{
		char *s = ft_strdup(tc[i]);
		if (ft_strncmp(s, tc[i], ft_strlen(tc[i]) ) == 0)
			pass++;
		else
		{
			fail++;
			printf("!!!Failed at:%s=%s\n", s, tc[i]);
		}
		free(s);
	}
	printf("test_ft_strdup pass:%d  fail:%d\n",pass, fail);

	return (fail);

}

// ---------------------------------------------------------------------

int	test_ft_substr(void)
{
	char	*s;
	s = ft_substr("abcde",2,3);

	write(1,s,4);
	free(s);
	return (0);
}

int	test_ft_strjoin(void)
{
	char	*s;
	s = ft_strjoin("123","456");

	write(1,s,7);
	free(s);
	return (0);
}

int	test_ft_strtrim(void)
{

	char	bigstr[20];
	char	rmov[20];
	char	res[10];
	char	*s;

	strcpy(bigstr,"abcdef");
	strcpy(rmov,"bcdexxzi");
	strcpy(res,"abcdef");
	s = ft_strtrim(bigstr, rmov);
	printf("1_test_%s_=_%s_\n",s,res);
	free(s);

	strcpy(bigstr,"abcdef");
	strcpy(rmov,"abcdef");
	strcpy(res,"");
	s = ft_strtrim(bigstr, rmov);
	printf("2_test_%s_=_%s_\n",s,res);
	free(s);

	strcpy(bigstr,"abcd");
	strcpy(rmov,"x");
	strcpy(res,"abcd");
	s = ft_strtrim(bigstr, rmov);
	printf("3_test_%s_=_%s_\n",s,bigstr);
	free(s);

	strcpy(bigstr,"");
	strcpy(rmov,"abc");
	strcpy(res,"");
	s = ft_strtrim(bigstr, rmov);
	printf("4_test_%s_=_%s_\n",s,res);
	free(s);

	strcpy(bigstr,"abc");
	strcpy(rmov,"");
	strcpy(res,"abc");
	s = ft_strtrim(bigstr, rmov);
	printf("5_test_%s_=_%s_\n",s,res);
	free(s);

	strcpy(bigstr,"");
	strcpy(rmov,"");
	strcpy(res,"");
	s = ft_strtrim(bigstr, rmov);
	printf("6_test_%s_=_%s_\n",s,res);
	free(s);

	strcpy(bigstr,"abcd");
	strcpy(rmov,"abc");
	strcpy(res,"d");
	s = ft_strtrim(bigstr, rmov);
	printf("7_test_%s_=_%s_\n",s,res);
	free(s);

	strcpy(bigstr,"aaaa");
	strcpy(rmov,"a");
	strcpy(res,"");
	s = ft_strtrim(bigstr, rmov);
	printf("8_test_%s_=_%s_\n",s,res);
	free(s);


	strcpy(bigstr,"aaaababaaaa");
	strcpy(rmov,"a");
	strcpy(res,"bab");
	s = ft_strtrim(bigstr, rmov);
	printf("9_test_%s_=_%s_\n",s,res);
	free(s);


	return (0);
}



static void		ft_free_all(char **pp_strs)
{
	int idx;

	idx = 0;
	while (pp_strs[idx])
	{
		free(pp_strs[idx]);
		idx++;
	}
	free(pp_strs);
	return;
}


int	test_ft_split(void)
{
	int pass;
	int fail;
	
	pass = 0;
	fail = 0;
	char tc1[20][30] = {"a1a222aaa333a44a","55a66a77aaa88","a55a66a77aaa88","55a66a77aaa88a","","1s1",""};
	char tc2[20] = {'a','a','a','a',  'a','a','\0',};
	// char tc1[20][30] = {"abbba","55a66a77aaa88","a55a66a77aaa88","55a66a77aaa88a","","1s1",""};
	// char tc2[20] = {'\0','a','a','a',  'a','a','\0',};
	// char res[20][20] = {"x1","x2"};
	for(int i = 0; i<7;i++)
	{
		char ** x = ft_split(tc1[i], tc2[i]);
		int j = 0;
		while (j < 4 && x[j])
		{
			printf("_test_%s,%d,%s\n",tc1[i],j,x[j]);
			j++;
			// pass++;
		}
		printf("_test_%p\n", *x);
		ft_free_all(x);
		// else
		// {
		// 	printf("!!!Failed at ft_calloc:__%p__%zu__%zu__\n", check, tc1[i],tc2[i]);
		// 	fail++;
		// }
		// free(check);

	}
	printf("test_ft_split pass:%d  fail:%d\n",pass, fail);
	return (fail);
}


// ---------------------------------------------------------------------

int test_all(void)
{
	int pass;
	int fail;

	pass = 0;
	fail = 0;
	if(test_ft_isalpha() == 0)	pass++;	else fail++;
	if(test_ft_isdigit() == 0)	pass++;	else fail++;
	if(test_ft_isalnum() == 0)	pass++;	else fail++;
	if(test_ft_isascii() == 0)	pass++;	else fail++;
	if(test_ft_isprint() == 0)	pass++;	else fail++;
	if(test_ft_strlen() == 0)	pass++;	else fail++;
	if(test_ft_memset_1() == 0)	pass++;	else fail++;
	if(test_ft_memset_2() == 0)	pass++;	else fail++;
	if(test_ft_bzero() == 0)	pass++;	else fail++;
	if(test_ft_memcpy_1() == 0)	pass++;	else fail++;
	if(test_ft_memcpy_2() == 0)	pass++;	else fail++;
	if(test_ft_memmove() == 0)	pass++;	else fail++;
	if(test_ft_strlcpy() == 0)	pass++;	else fail++;
	if(test_ft_strlcat() == 0)	pass++;	else fail++;
	if(test_ft_toupper() == 0)	pass++;	else fail++;
	if(test_ft_tolower() == 0)	pass++;	else fail++;
	if(test_ft_strchr() == 0)	pass++;	else fail++;
	if(test_ft_strrchr() == 0)	pass++;	else fail++;
	if(test_ft_strncmp() == 0)	pass++;	else fail++;
	if(test_ft_memcmp() == 0)	pass++;	else fail++;
	if(test_ft_strnstr() == 0)	pass++;	else fail++;
	if(test_ft_atoi() == 0)		pass++;	else fail++;

	printf("\nFINAL ges:%d    pass:%d    fail:%d\n", pass + fail, pass, fail);
	return (0);
}



int	main(void)
{
	// test_all();

	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	// test_ft_isascii();
	// test_ft_isprint();
	// test_ft_strlen();
	// test_ft_memset_1();
	// test_ft_memset_2();
	// test_ft_bzero();
	// test_ft_memcpy_1();
	// test_ft_memcpy_2();
	// test_ft_memmove();
	// test_ft_strlcpy();
	// test_ft_strlcat();
	// test_ft_toupper();
	// test_ft_tolower();
	// test_ft_strchr();
	// test_ft_strrchr();
	// test_ft_strncmp();
	// test_ft_memcmp();
	// test_ft_strnstr();
	// test_ft_atoi();
	
	// add to all:
	// test_ft_calloc();
	// test_ft_strdup();


	// test_ft_substr();
	// test_ft_strjoin();
	// test_ft_strtrim();
	test_ft_split();

	return (0);
}
