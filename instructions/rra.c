/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:39:29 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:53:21 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_all *stack, int checker)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*beforelast;

	if (stack->size_a < 2)
		return ;
	first = stack->a;
	beforelast = stack->a;
	while (beforelast->next->next)
		beforelast = beforelast->next;
	last = ft_lstlast(stack->a);
	last->next = stack->a;
	beforelast->next = NULL;
	stack->a = last;
	if (checker)
		write(1, "rra\n", 4);
}
