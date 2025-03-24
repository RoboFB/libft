/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:04 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/24 16:26:39 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_get_len(int n);
static void		ft_insert_revers(char *dst, int n, int len);

char	*ft_itoa(int n)
{
	int		idx;
	int		len;
	char	*str;

	idx = 0;
	len = ft_get_len(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_insert_revers(str, n, len);
	return (str);
}

static
int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		n = n / 10;
		len++;
	}
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (0 <= n && n <= 9)
		len++;
	else
	{
		len += ft_get_len(n / 10);
		len ++;
		return (len);
	}
	return (len);
}

static
void	ft_insert_revers(char *dst, int n, int len)
{
	int	idx;

	idx = len;
	if (n == -2147483648)
	{
		ft_strlcpy(dst, "-2147483648", 12);
		return ;
	}
	if (n < 0)
	{
		dst[0] = '-';
		n *= -1;
	}
	dst[idx--] = '\0';
	if (!n)
		dst[idx] = '0';
	while (n)
	{
		dst[idx--] = '0' + n % 10;
		n /= 10;
	}
	return ;
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// 	// test get len
// 	if (get_len(INT_MAX) != 10)		printf("1_%d_\n", get_len(INT_MAX));
// 	if (get_len(INT_MIN) != 11)		printf("2_%d_\n", get_len(INT_MIN));
// 	if (get_len(0) != 1)			printf("3_%d_\n", get_len(0));
// 	if (get_len(1234) != 4)			printf("4_%d_\n", get_len(1234));
// 	if (get_len(-123) != 4)			printf("5_%d_\n", get_len(-123));
// 	if (get_len(1) != 1)			printf("6_%d_\n", get_len(1));
// 	if (get_len(-1) != 2)			printf("7_%d_\n", get_len(-1));
// 	return (0);
// }


// int	main(void)
// {
// 	// test all
// 	printf("1_%s_\n", ft_itoa(INT_MAX));
// 	printf("2_%s_\n", ft_itoa(INT_MIN));
// 	printf("3_%s_\n", ft_itoa(0));
// 	printf("4_%s_\n", ft_itoa(1234));
// 	printf("5_%s_\n", ft_itoa(-123));
// 	printf("6_%s_\n", ft_itoa(1));
// 	printf("7_%s_\n", ft_itoa(-1));
// 	return (0);
// }