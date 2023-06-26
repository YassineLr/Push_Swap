/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:12:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/26 01:48:35 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**joining_args(char **av)
{
	char	*stocked;
	char	*temp;
	char	**splited;
	int		i;

	i = 0;
	while (av[i])
		is_empty(av[i++]);
	i = 0;
	stocked = NULL;
	if (!av[i])
		return (NULL);
	while (av[i])
	{
		stocked = ft_strjoin(stocked, av[i]);
		stocked = ft_strjoin(stocked, " ");
		i++;
	}
	splited = NULL;
	i = 0;
	splited = ft_split(stocked, ' ');
	return (splited);
}

void	args_in_list(char **str, t_all *stack)
{
	t_stack	*new;
	int		i;

	stack->a = NULL;
	stack->size_a = 0;
	stack->size_b = 0;
	if (!check_digits(str))
		print_error();
	ft_duplicate(str);
	i = 0;
	while (str[i])
	{
		new = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(&stack->a, new);
		stack->size_a++;
		i++;
	}
}
