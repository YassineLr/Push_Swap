/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:17:01 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/31 14:05:25 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	t_stack	*courant;
	int		size;

	size = 0;
	courant = lst;
	while (courant)
	{
		courant = courant -> next;
		size++;
	}
	return (size);
}
