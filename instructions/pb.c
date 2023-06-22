/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:09:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/21 18:21:46 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

void	pb(t_all *stack)
{
	t_stack	*tmp;

	if (stack->a == NULL)
		return ;
	tmp = stack->a;
	stack->a = stack->a->next;
	tmp->next = stack->b;
	stack->b = tmp;
	if(stack->size_b == 0)
		stack->b->next = NULL;
	stack->size_a--;
	stack->size_b++;
	printf("pb\n");
}
