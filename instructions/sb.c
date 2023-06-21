/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:25:01 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/20 15:10:13 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sb(t_all *stack)
{
    t_stack *first;
    t_stack *second;
    t_stack  *temp;
    
    first = stack->b;
    second = first->next;
    temp = second->next;
    second->next = first;
    first->next = temp;
    stack->b = second;
    // stack->b->next = tmp;
    printf("sb\n");
}