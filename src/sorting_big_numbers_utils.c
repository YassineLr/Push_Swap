/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big_numbers_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:41:34 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 03:56:58 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

int	get_max(t_stack *stack)
{
	t_stack	*courant;
	int		max;

	if (!stack)
		exit(127);
	courant = stack;
	max = courant->content;
	while (courant)
	{
		if (courant->content > max)
			max = courant->content;
		courant = courant->next;
	}
	return (max);
}

int	get_max_index(t_stack *stack, int max)
{
	t_stack	*courant;
	int		index;

	index = 0;
	courant = stack;
	while (courant)
	{
		if (courant->content == max)
			return (index);
		index++;
		courant = courant->next;
	}
	return (-1);
}

void	push_from_b_to_a(t_all *stack)
{
	int	max_index;

	while (stack->size_b)
	{
		max_index = get_max_index(stack->b, get_max(stack->b));
		if (max_index <= stack->size_b / 2)
			while (get_max_index(stack->b, get_max(stack->b)))
				rb(stack, 1);
		else
			while (get_max_index(stack->b, get_max(stack->b)))
				rrb(stack, 1);
		pa(stack, 1);
	}
}
