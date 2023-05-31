/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:14:20 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/31 14:07:19 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_stack **lst, void (*del)(int))
{
	t_stack	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
