/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:38:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 00:57:54 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_all *stack, int checker)
{
	t_stack	*last;
	t_stack	*first;

	if (!stack->b || stack->size_b < 2)
		return ;
	first = stack->b;
	last = ft_lstlast(stack->b);
	stack->b = stack->b->next;
	last->next = first;
	last->next->next = NULL;
	if (checker)
		write(1, "rb\n", 3);
}
