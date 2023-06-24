/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:33:02 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:06:37 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort2(t_all *stack)
{
    if (stack->a->content > stack->a->next->content)
        sa(stack,1);
}

int  get_min(t_stack *stack)
{
    t_stack *courant;
    int     min;

    courant = stack;
    min = courant->content;
    while (courant)
    {
        if(courant->content < min)
            min = courant->content;
        courant = courant->next;
    }
    return (min);
}

void best_move(t_all *stack, int count)
{
    if (count == 0)
        return ;
    else if(count == 1)
        sa(stack,1);
    else if(count == 2)
    {
        ra(stack,1);
        sa(stack,1);
    }
    else if(count == 3)
    {
        rra(stack,1);
        if (stack->size_a == 5)
            rra(stack,1);
    }
    else if(count == 4 && stack->size_a == 5)
        rra(stack,1);
}

void min_to_the_top(t_all *stack, int min)
{
    t_stack *courant;
    int     count;
    int     i;

    i = 0;
    count = 0;
    courant = stack->a;
    while (courant->content > min)
    {
        count +=1;
        courant = courant->next;
    }
    best_move(stack, count);
}

void	sort_triplet(t_all *stack)
{
    int a;
    int b;
    int c;

    a = stack->a->content;
    b = stack->a->next->content;
    c = stack->a->next->next->content;
    
	if (a > b && b < c && a < c)
		sa(stack,1);
	else if (a > b && b > c && a > c)
	{
		sa(stack,1);
		rra(stack,1);
	}
	else if (a > b && b < c && a > c)
		ra(stack,1);
	else if (a < b && b > c && a < c)
	{
		sa(stack,1);
		ra(stack,1);
	}
	else if (a < b && b > c && a > c)
		rra(stack,1);
}

void    sort4_5(t_all *stack)
{
    int     iterations;
    int     i;

    i = 0;
    iterations = stack->size_a - 3;
    while (i < iterations)
    {
        min_to_the_top(stack,get_min(stack->a));
        if(stack)
        pb(stack,1);
        i++;
    }
    sort_triplet(stack);
    i = 0;
    while (i < iterations)
    {
        pa(stack,1);
        i++;
    }
}