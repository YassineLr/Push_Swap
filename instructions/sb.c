/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:25:01 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:54:53 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_all *stack, int checker)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*temp;

	if (stack->size_b < 2)
		return ;
	first = stack->b;
	second = first->next;
	temp = second->next;
	second->next = first;
	first->next = temp;
	stack->b = second;
	if (checker)
		write(1, "sb\n", 3);
}
