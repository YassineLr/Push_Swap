/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:12:26 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/08 02:02:00 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *filling(t_all *stack,int *tab)
{
    int i;
    t_stack *courant;
    
    i = 0;
    courant = stack->a;
    while(i < stack->size_a)
    {
        tab[i] = courant->content;
        i++;
        courant = courant->next;
    }
    return (tab);
}

int *sort_in_tab(t_all *stack)
{
    int *tab;
    int i;
    int k;
    int tmp;

    i = 0;
    // printf("in sorting !");
    tab = (int*)malloc(stack->size_a*sizeof(int));
    tab = filling(stack, tab);
    while (i < stack->size_a)
    {
        k = 0;
        while (k < stack->size_a - i -1)
        {
            if(tab[k] > tab[k + 1])
            {
                tmp = tab[k];
                tab[k] = tab[k+1];
                tab[k+1] = tmp;
            }
            k++;
        }
        i++;
    }
    // i = 0;
    // while(i < stack->size_a)
    // {
    //     printf("%d\n", tab[i]);
    //     i++;
    // }
    return(tab);
}

void	push_from_a_to_b(t_all *stack, int *tab, int start, int end)
{
	int	top;

    if (stack->size_a < end)
        end = stack->size_a - 1;
	while (stack->size_a)
	{
		top = stack->a->content;
		if (top <= tab[start])
		{
			pb(stack);
			rb(stack);
			start++;
			end++;
		}
		else if (top > tab[start] && top < tab[end])
		{
			pb(stack);
			start++;
			end++;
		}
		else if (top >= tab[end])
			ra(stack);
	}
}
