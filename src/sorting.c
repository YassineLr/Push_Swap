/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:33:02 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/26 01:50:11 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort2(t_all *stack)
{
	if (stack->size_a == 1)
		exit(0);
	if (stack->a->content > stack->a->next->content)
		sa(stack, 1);
}

void	sort_triplet(t_all *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->a->content;
	b = stack->a->next->content;
	c = stack->a->next->next->content;
	if (a > b && b < c && a < c)
		sa(stack, 1);
	else if (a > b && b > c && a > c)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (a > b && b < c && a > c)
		ra(stack, 1);
	else if (a < b && b > c && a < c)
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (a < b && b > c && a > c)
		rra(stack, 1);
}

void	sort4_5(t_all *stack)
{
	int		iterations;
	int		i;

	i = 0;
	iterations = stack->size_a - 3;
	while (i < iterations)
	{
		min_to_the_top(stack, get_min(stack->a));
		if (stack)
			pb(stack, 1);
		i++;
	}
	sort_triplet(stack);
	i = 0;
	while (i < iterations)
	{
		pa(stack, 1);
		i++;
	}
}
