/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:21 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/21 18:12:44 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c);
static void		ft_free_all(char **pp_strs);

// malloc return new string that ist trimed from both sites with the char of set
char		**ft_split(char const *s, char c)
{
	int		idx_char;
	int		idx_words;
	int		idx_old;
	int		counter_words;
	char	**pp_new_str;
	
	idx_char = 0;
	idx_words = 0;
	idx_old = 0;
	counter_words = ft_count_words(s, c);
	pp_new_str = ft_calloc(counter_words + 1, sizeof(char *));
	if (!pp_new_str)
		return (NULL);
	while (idx_words < counter_words)
	{
		while (s[idx_char] && s[idx_char] == c)
			idx_char++;
		idx_old = idx_char;
		while (s[idx_char] && s[idx_char]!= c)
			idx_char++;
		pp_new_str[idx_words] = ft_calloc(idx_char - idx_old + 1,sizeof(char));
		if (pp_new_str[idx_words] == NULL)
		{
			ft_free_all(pp_new_str);
			return (NULL);
		}
		ft_strlcpy(pp_new_str[idx_words], s + idx_old, idx_char - idx_old + 1);
		idx_words++;
	}
	pp_new_str[idx_words] = NULL;
	return (pp_new_str);
}

static int	ft_count_words(char const *s, char c)
{
	int		idx;
	int		idx_old;
	int		counter;
	
	idx = 0;
	idx_old = 0;
	counter = 0;
	while (s[idx])
	{
		while (s[idx] && s[idx] == c)
			idx++;
		idx_old = idx;
		while (s[idx] && s[idx]!= c)
			idx++;
		if (idx> idx_old)
			counter++;
	}
	return (counter);
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
