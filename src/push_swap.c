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
		// printf("%d", get_min(&stack.a));
		// min = get_min(stack.a);
		// min_to_the_top(&stack,min);
		// sort_triplet(stack);
		// sort4_5(stack);
		
		// sa(&stack);
		// printf("%d", get_min(&stack.a));
		// min = get_min(stack.a);
		// min_to_the_top(&stack,min);
		// sort_triplet(&stack);
		// pb(&stack);
		// printf("-> bbbbb -> %d\n",stack.b->content);
		printf("%d\n", get_max(stack->a));
		// printf("--->%d\n",min);
		// pb(stack);
		// pa(stack);
		// pb(&stack);
		// printf("size b : %d\n", stack->size_b);
		// printf("size a : %d\n", stack->size_a);
		// tab = sort_in_tab(stack);
		// while(i<stack->size_a)
		// {
		// 	printf("%d\n",tab[i]);
		// 	i++;
		// }
		// push_from_a_to_b(stack,tab,0,15);
		// printf("size finale a : %d\n",stack->size_a);
		// printf("size finale b : %d\n",stack->size_b);
		// printf("====================\n");
		// courant = stack->a;
		// while(courant)
    	// {
		// 	printf("%d\n",courant->content);
		// 	courant = courant->next;
    	// }
		// while (courant)
		// {
		// 	printf("%d\n",courant->content);
		// 	courant = courant->next;
		// }
		// printf("=====================");
		// courant1 = stack.b;
		// while (courant1)
		// {
		// 	printf("%d\n",courant1->content);
		// 	courant1 = courant->next;
		// }
		
        // printf("this is b => %d",stack.b->content);
		// printf("after sorting\n");
		// courant = stack.a;
		// while (courant)
		// {
		// 	printf("%d\n",courant->content);
		// 	courant = courant->next;
		// }
	}
}