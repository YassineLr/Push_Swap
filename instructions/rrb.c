/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:47:51 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:05:23 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rrb(t_all *stack, int checker)
{
    t_stack *last;
    t_stack *first;
    t_stack *beforelast;

    if(stack->size_b < 2)
        return ;
    first = stack->b;
    beforelast = stack->b;
    while (beforelast->next->next)
        beforelast = beforelast->next;
    last = ft_lstlast(stack->b);
    last->next = stack->b;
    beforelast->next = NULL;
    stack->b = last;
    if(checker)
		write(1,"rrb\n",4);
}