/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:07:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/23 23:05:23 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_all	*stack;
	char	**arg;

	if (ac > 2)
	{
		stack = (t_all *) malloc (sizeof(t_all));
		arg = joining_args(av + 1);
		ft_is_sorted(arg);
		args_in_list(arg, stack);
		if (stack->size_a == 2)
			sort2 (stack);
		else if (stack->size_a == 3)
			sort_triplet(stack);
		else if (stack->size_a == 4 || stack->size_a == 5)
			sort4_5(stack);
		else
		{
			if (stack->size_a < 100)
				push_from_a_to_b(stack, sort_in_tab(stack), 0, 15);
			else
				push_from_a_to_b(stack, sort_in_tab(stack), 0, 40);
			push_from_b_to_a(stack);
		}
	}
}
