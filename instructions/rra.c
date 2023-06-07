/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:39:29 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/07 22:48:52 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_all *stack)
{
    t_stack *last;
    t_stack *first;
    t_stack *beforelast;

    first = stack->a;
    beforelast = stack->a;
    while (beforelast->next->next)
        beforelast = beforelast->next;
    last = ft_lstlast(stack->a);
    last->next = stack->a;
    beforelast->next = NULL;
    stack->a = last;
   printf("rra\n");
    
}