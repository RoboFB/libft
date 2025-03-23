/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/22 16:30:34 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
// printf("_words:_%d\n", counter_words);
// printf("size:_%d\n", size_substr);
// printf("_test_%s,%s\n",s_next,s_old);
// printf("_num:_%p=%p,%d,%s\n", s_old,s_next,(int)(s_next - s_old),*pp_next);

static int		ft_next_size(char **s_next, char c);
static int		ft_count_words(char const *s, char c);
static int		ft_er_free_(char **pp_strs, int idx_words);

// malloc return map of split str or NULL on Error
char		**ft_split(char const *s, char c)
{
	int		size_substr;
	char	*p_finder;
	int		idx_words;
	char	**pp_split;

	idx_words = 0;
	p_finder = (char *)s;
	pp_split = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (pp_split == NULL)
		return (NULL);
	while (*p_finder)
	{
		size_substr = ft_next_size(&p_finder, c);
		pp_split[idx_words] = ft_calloc(size_substr, sizeof(char));
		if (!ft_er_free_(pp_split, idx_words))
			return (NULL);
		ft_strlcpy(pp_split[idx_words], p_finder - size_substr + 1, size_substr);
		idx_words++;
	}
	pp_split[idx_words] = NULL;
	return (pp_split);
}

static int		ft_next_size(char **pp_next, char c)
{
	char	*s_next;
	char	*s_old;

	s_next = *pp_next;
	while (*s_next && *s_next == c)
		s_next++;
	s_old = s_next;
	while (*s_next && *s_next!= c)
		s_next++;
	if (s_next > s_old)
	{
		*pp_next = s_next;
		return (s_next - s_old + 1);
	}
	else
		return (0);

}

static int	ft_count_words(char const *s, char c)
{
	char	*p_finder;
	int		counter;
	
	p_finder = (char *)s;
	counter = 0;
	while (ft_next_size(&p_finder, c))
		counter++;
	return (counter);
}

static int		ft_er_free_(char **pp_strs, int idx_words)
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


