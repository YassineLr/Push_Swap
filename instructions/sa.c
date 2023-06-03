/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:23:43 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/02 17:21:59 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_all *stack)
{
    int i;
    t_stack *courant;
    int tmp;
    
    tmp = stack->a->content;
    stack->a->content = stack->a->next->content;
    stack->a->next->content = tmp;
}