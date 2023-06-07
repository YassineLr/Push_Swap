/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:07:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/07 23:05:30 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
    char 	*str;
    char	**splited;
    int 	i = 0;
	int 	j = 0;
	t_all	stack;
	t_stack	*courant;
	t_stack	*courant1;
	int min;
	int 	flag;
	char 	**arg;

	if(ac > 1)
	{
		check_max_min(av);
		arg = joining_args(av+1);
		args_in_list(arg, &stack);
		// printf("%d", get_min(&stack.a));
		// min = get_min(stack.a);
		// min_to_the_top(&stack,min);
		// compare_triplet(&stack);
		// pb(&stack);
		// printf("-> bbbbb -> %d\n",stack.b->content);
		// printf("--->%d\n",min);
		// sort4_5(&stack);
		// courant = stack.a;
		// pb(&stack);
		// pb(&stack);
		// printf("%d\n", stack.size_b);
		// printf("%d\n", stack.size_a);

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