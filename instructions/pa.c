/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:30:03 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 03:55:47 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_all *stack, int checker)
{
	t_stack	*tmp;

	if (stack->size_b == 0)
		return ;
	tmp = stack->b;
	stack->b = stack->b->next;
	tmp->next = stack->a;
	stack->a = tmp;
	if (stack->size_b == 0)
		stack->a->next = NULL;
	stack->size_b--;
	stack->size_a++;
	if (checker)
		write(1, "pa\n", 3);
}
