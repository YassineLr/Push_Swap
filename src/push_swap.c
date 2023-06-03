/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:07:15 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/03 22:45:32 by ylarhris         ###   ########.fr       */
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
	int 	flag;
	char 	**arg;

	if(ac > 1)
	{
		check_max_min(av);
		arg = joining_args(av+1);
		args_in_list(arg, &stack);
		courant = stack.a;
		while (courant)
		{
			printf("%d\n",courant->content);
			courant = courant->next;
		}
		// pa(&stack);
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