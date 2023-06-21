/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:38:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/21 12:56:42 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rb(t_all *stack)
{
    t_stack    *tmp;
    t_stack    *last;

    if (stack->size_b < 2)
        return ;
    last = stack->b;
    while(last->next)
        last = last->next;
    tmp = stack->b;
    stack->b = stack->b->next;
    last->next = tmp;
    last->next->next = NULL;
}