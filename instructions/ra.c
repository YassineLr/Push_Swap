/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:10:22 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/21 12:09:17 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_all *stack)
{
    t_stack *last;
    t_stack *first;
    t_stack *second;

    if (!stack->a || stack->size_a < 2)
        return ;
    first = stack->a;
    second = first->next;
    last = ft_lstlast(stack->a);
    last->next = first;
    stack->a = second;
    first->next =NULL;
    printf("ra\n");
}