/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:19:39 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/28 12:42:15 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// F: Malloc -> *new_node or NULL
t_list	*ft_lstnew(void *content)
{
	t_list		*new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = 0;
	return (new_node);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*test = "baum";
// 	t_list	*x = ft_lstnew(test);
// 	printf("%s\n",(char*)x->content);
// 	free(x);
// 	return (0);
// }
