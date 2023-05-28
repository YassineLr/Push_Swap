/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:53:41 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/27 23:55:42 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_args **lst, t_args *new)
{
	t_args	*courant;

	courant = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (courant -> next)
			courant = courant -> next;
		courant -> next = new;
	}
}