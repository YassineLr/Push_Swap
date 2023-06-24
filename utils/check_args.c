/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:53:42 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:01:18 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_empty(char *str)
{
	int i;
	
	i = 0;
	if (!str || str[i] == '\0')
		print_error();
	while (str[i])
	{
		if(str[i] <= '9' && str[i] >= '0')
			return(1);
		i++;
	}
	print_error();
	return(0);
}

void check_max_min(char **av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			print_error();
		i++;
	}
}

void ft_duplicate(char **str)
{
    int i;
    int j;
	int to_compare;
	int compare_with;
    char *temp;

    i = 0;
    if(!str)
        return ;
    while (str[i])
    {
		compare_with = ft_atoi(str[i]);
        j = i+1;
        while (str[j])
        {
			to_compare = ft_atoi(str[j]);
            if(to_compare == compare_with)
            	print_error();
            j++;
        }
        i++;
    }
}

int	check_int(const char *s)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] == 32 || (s[i] <= 13 && s[i] >= 9))
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if(s[i] > '9' || s[i] < '0')
            return (0);
        i++;
	}
	return (1);
}

int check_digits(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(!check_int(str[i]))
			return(0);
		i++;
	}
	return (1);
}
