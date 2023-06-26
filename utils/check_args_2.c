/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 04:01:24 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:49:55 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(char **str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i + 1])
		return (1);
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) >= ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	print_error();
	return (0);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(127);
}
