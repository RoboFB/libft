/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:28:14 by rgohrig           #+#    #+#             */
/*   Updated: 2025/03/28 15:10:11 by rgohrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return ;
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