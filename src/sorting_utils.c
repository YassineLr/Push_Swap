/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 23:59:38 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/25 23:59:45 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_stack *stack)
{
	t_stack	*courant;
	int		min;

	courant = stack;
	min = courant->content;
	while (courant)
	{
		if (courant->content < min)
			min = courant->content;
		courant = courant->next;
	}
	return (min);
}

void	best_move(t_all *stack, int count)
{
	if (count == 0)
		return ;
	else if (count == 1)
		sa(stack, 1);
	else if (count == 2)
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	else if (count == 3)
	{
		rra(stack, 1);
		if (stack->size_a == 5)
			rra(stack, 1);
	}
	else if (count == 4 && stack->size_a == 5)
		rra(stack, 1);
}

void	min_to_the_top(t_all *stack, int min)
{
	t_stack	*courant;
	int		count;
	int		i;

	i = 0;
	count = 0;
	courant = stack->a;
	while (courant->content > min)
	{
		count += 1;
		courant = courant->next;
	}
	best_move(stack, count);
}
