/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:47:51 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/20 15:10:05 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rrb(t_all *stack)
{
    t_stack *last;
    t_stack *first;
    t_stack *beforelast;

    first = stack->b;
    beforelast = stack->b;
    while (beforelast->next->next)
        beforelast = beforelast->next;
    last = ft_lstlast(stack->b);
    last->next = stack->b;
    beforelast->next = NULL;
    stack->b = last;
    printf("rrb\n");
}