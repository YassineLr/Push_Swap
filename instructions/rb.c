/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:38:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/03 21:47:27 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rb(t_all *stack)
{
    t_stack *last;
    t_stack *first;
    t_stack *second;

    first = stack->b;
    second = stack->b->next;
    last = ft_lstlast(stack->b);
    last->next = first;
    first->next =NULL;
    stack->b = second;
}