/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:19:39 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/27 16:30:47 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = ft_calloc(1, sizeof(t_list));
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
