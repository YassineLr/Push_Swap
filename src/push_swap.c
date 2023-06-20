/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:07:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/08 01:51:09 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
	t_all	*stack;
	t_stack	*courant;
	char 	**arg;
    char 	*str;
	int 	i;
	int 	*tab;

	i = 0;
	stack = (t_all*)malloc(sizeof(t_all));
	if(ac > 1)
	{
		arg = joining_args(av+1);
		args_in_list(arg, stack);
		if(stack->size_a == 2)
			sort2(stack);
		else if(stack->size_a == 3)
			sort_triplet(stack);
		else if(stack->size_a == 4 || stack->size_a == 5)
			sort4_5(stack);
		else
		{
			tab = sort_in_tab(stack);
			push_from_a_to_b(stack,tab,0,15);
			push_from_b_to_a(stack);
			// printf("%d\n",stack->b->content);
			courant = stack->a;
			while(courant)
    		{
				printf("%d\n",courant->content);
				courant = courant->next;
    		}
		}
	}
}