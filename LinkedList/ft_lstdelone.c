/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:14:31 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/31 14:07:02 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdelone(t_stack *lst, void (*del)(int))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
