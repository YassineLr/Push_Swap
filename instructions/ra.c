/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:10:22 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/03 21:46:43 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_all *stack)
{
    t_stack *last;
    t_stack *first;
    t_stack *second;

    first = stack->a;
    second = stack->a->next;
    last = ft_lstlast(stack->a);
    last->next = first;
    first->next =NULL;
    stack->a = second;
}