/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:12:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/03 22:06:29 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char **joining_args(char **av)
{
    char *stocked;
    char *temp;
    char **splited;
	char **tmp;
    int  i;
    int  j;
	int k;

    i = 0;
	while (av[i])
		is_empty(av[i++]);
	i = 0;
	stocked = NULL;
    if(!av[i])
        return(NULL);
	while (av[i])
	{
		stocked = ft_strjoin(stocked, av[i]);		
		stocked = ft_strjoin(stocked, " ");
		i++;
	}
	splited = NULL;
	i = 0;
    splited = ft_split(stocked, ' ');	
    return(splited);
}



void args_in_list(char **str, t_all *stack)
{
	// t_stack **stack;
	// t_all 	*stack; 
	t_stack *new;
	t_stack *courant;
	int		tmp;
	int		i;
	int		j;
	
	stack->a = NULL;
	if(!check_digits(str))
	{
		write(2, "Error !",8);
		exit(127);
	}
	ft_duplicate(str);
	i = 0;
	while (str[i])
	{
		tmp = ft_atoi(str[i]);
		new = ft_lstnew(tmp);
		ft_lstadd_back(&stack->a, new);
		stack->size_a++;
		i++;
	}
	// printf("this is the size of the stackk a : %d\n", stack->size_a);
}
