/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:25:01 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/02 17:27:57 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_all *stack)
{
    int i;
    t_stack *courant;
    int tmp;
    
    tmp = stack->b->content;
    stack->b->content = stack->b->next->content;
    stack->b->next->content = tmp;
}