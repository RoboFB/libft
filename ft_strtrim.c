/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:53:32 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/19 21:51:23 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

HIER WEITER MACHEN {BERLEGEN OB AUCH VON HINTEN STRRSTR YU NUTEN ODER DOCH CHAREACTER CLEAREN I DONT KNOW}

// malloc return a trimed string
char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	size_t	p_match;

	char	*trimed;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	p_match = ft_strnstr(s1, set, len_s1);
	if (p_match == NULL)
		return (NULL);
	trimed = ft_calloc(len_s1 - len_set + 1, sizeof(char));
	if (trimed == NULL)
		return (NULL);

	ft_strlcpy(trimed, p_match, len_set + 1);
	return (trimed);
}