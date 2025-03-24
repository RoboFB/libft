/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/24 09:15:46 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
// printf("_words:_%d\n", counter_words);
// printf("size:_%d\n", size_substr);
// printf("_test_%s,%s\n",s_next,s_old);
// printf("_num:_%p=%p,%d,%s\n", s_old,s_next,(int)(s_next - s_old),*pp_next);

static int		ft_next_len(char *p_next, char c);
static int		ft_count_words(char *s, char c);
static int		ft_er_free_(char **pp_strs, int idx_words);

// malloc return map of split str or NULL on Error
char	**ft_split(char const *s, char c)
{
	int		len_substr;
	char	*p_sub_start;
	int		idx_words;
	char	**pp_split;

	idx_words = 0;
	p_sub_start = (char *)s;
	pp_split = ft_calloc(ft_count_words(p_sub_start, c) + 1, sizeof(char *));
	if (pp_split == NULL)
		return (NULL);
	while (*p_sub_start)
	{
		len_substr = ft_next_len(p_sub_start, c);
		pp_split[idx_words] = ft_calloc(len_substr + 1, sizeof(char));
		if (!ft_er_free_(pp_split, idx_words))
			return (NULL);
		while (*p_sub_start == c)
			p_sub_start++;
		ft_strlcpy(pp_split[idx_words], p_sub_start, len_substr + 1);
		p_sub_start += len_substr;
		idx_words++;
	}
	pp_split[idx_words] = NULL;
	return (pp_split);
}

static int	ft_next_len(char *p_next, char c)
{
	char	*p_old;

	while (*p_next && *p_next == c)
		p_next++;
	p_old = p_next;
	while (*p_next && *p_next != c)
		p_next++;
	if (p_next > p_old)
	{
		return (p_next - p_old);
	}
	else
		return (0);

}

static int	ft_count_words(char *s, char c)
{
	int		counter;
	int		idx;

	idx = 0;
	counter = 0;
	while (s[idx])
	{
		idx += ft_next_len(s, c) + 1;
		counter++;
	}
	return (counter);
}

static int	ft_er_free_(char **pp_strs, int idx_words)
{
	if (pp_strs[idx_words] == NULL)
	{
		while (pp_strs[idx_words])
		{
			free(pp_strs[idx_words]);
			idx_words++;
		}
		return (0);
	}
	else
		return (1);
}


