/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:33:02 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/03 22:38:47 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort2(t_all *stack)
{
    if (stack->a->content > stack->a->next->content)
        sa(stack);
}

void    sort5(t_all *stack)
{
    t_stack *courant;
    
}