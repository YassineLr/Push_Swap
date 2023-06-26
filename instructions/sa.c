/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:23:43 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:54:12 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_all *stack, int checker)
{
	int		i;
	t_stack	*first;
	t_stack	*second;
	t_stack	*temp;

	if (stack->size_a < 2)
		return ;
	first = stack->a;
	second = first->next;
	temp = second->next;
	second->next = first;
	first->next = temp;
	stack->a = second;
	if (checker)
		write(1, "sa\n", 3);
}
