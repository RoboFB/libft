/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/26 14:00:04 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static char const	*ft_next_len(char const *p_next, char c, int *len);
static int			ft_count_words(char const *s, char c);
static int			ft_er_free_(char **pp_strs, int idx_words);

// malloc return map of split str or NULL on Error
char	**ft_split(char const *s, char c)
{
	char const		*positon;
	int				len_substr;
	int				idx_words;
	char			**pp_split;

	idx_words = 0;
	positon = s;
	pp_split = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (pp_split == NULL)
		return (NULL);
	while (*positon)
	{
		len_substr = 0;
		positon = ft_next_len(positon, c, &len_substr);
		if (!positon)
			return (pp_split);
		if (len_substr)
		{
			pp_split[idx_words] = ft_substr(positon, 0, len_substr);
			if (!ft_er_free_(pp_split, idx_words++))
				return (NULL);
			positon += len_substr;
		}
	}
	return (pp_split);
}
// while (*p_sub_start)
// {
// 	len_substr = ft_next_len(p_sub_start, c);
// 	pp_split[idx_words] = ft_calloc(len_substr + 1, sizeof(char));
// 	if (!ft_er_free_(pp_split, idx_words))
// 		return (NULL);
// 	while (*p_sub_start == c)
// 		p_sub_start++;
// 	ft_strlcpy(pp_split[idx_words], p_sub_start, len_substr + 1);
// 	p_sub_start += len_substr;
// 	idx_words++;
// }
// pp_split[idx_words] = NULL;
// return (pp_split);

static
char const	*ft_next_len(char const *p_next, char c, int *len)
{
	char const	*p_old;

	while (*p_next && *p_next == c)
		p_next++;
	p_old = p_next;
	while (*p_next && *p_next != c)
		p_next++;
	if (p_next > p_old)
	{
		*len = p_next - p_old;
		return (p_old);
	}
	else
		return (0);
}

static
int	ft_count_words(char const *s, char c)
{
	char const	*positon;
	int			counter;
	int			len;

	counter = 0;
	len = 0;
	positon = s;
	while (*positon)
	{
		len = 0;
		positon = ft_next_len(positon, c, &len);
		if (!positon && len)
			return (counter);
		else if (!positon && !len)
			return (counter);
		positon += len;
		counter++;
	}
	return (counter);
}

static int	ft_er_free_(char **pp_strs, int idx_words)
{
	int		idx;

	idx = 0;
	if (!pp_strs[idx_words])
	{
		while (idx < idx_words)
		{
			free(pp_strs[idx]);
			idx++;
		}
		free(pp_strs);
		return (0);
	}
	else
		return (1);
}
