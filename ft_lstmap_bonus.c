/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:28:27 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/28 16:57:09 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// F: malloc, free duplicate list, dub cont with given function.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_node;
	t_list		*start_new_lst;
	void		*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_content = f(lst->content);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	start_new_lst = new_node;
	lst = lst->next;
	while (lst)
	{
		new_content = f(lst->content);
		new_node->next = ft_lstnew(new_content);
		if (!new_node->next)
		{
			del(new_content);
			ft_lstclear(&start_new_lst, del);
			return (NULL);
		}
		new_node = new_node->next;
		lst = lst->next;
	}
	return (start_new_lst);
}
