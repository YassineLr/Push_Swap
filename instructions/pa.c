/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:30:03 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/07 23:04:29 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_all *stack)
{
	t_stack	*tmp;

	if (stack->b == NULL)
		return ;
	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = stack->a;
	stack->a = tmp;
	stack->size_a++;
	stack->size_b--;
	write(1, "pa\n", 3);
}