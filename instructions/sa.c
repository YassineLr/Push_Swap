/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:23:43 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/07 22:51:27 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_all *stack)
{
    int     i;
    t_stack *first;
    t_stack *second;
    t_stack  *temp;
    
    first = stack->a;
    second = first->next;
    temp = second->next;
    second->next = first;
    first->next = temp;
    stack->a = second;
    // stack->a->next = tmp;
    printf("sa\n");
}