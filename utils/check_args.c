/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:12:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/01 21:54:43 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_empty(char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '\0')
	{
		write(2,"Error!\n",8);
		exit(127);
	}
	if (!str)
	{
		write(2,"Error!\n",8);
		exit(127);
	}
	while (str[i])
	{
		if(str[i] <= '9' && str[i] >= '0')
			return(1);
		i++;
	}
	write(2,"Error!\n",8);
	exit(127);
	return(0);
}

void check_max_min(char **av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
		{
			write(2, "ERROR!",7);
			exit(127);
		}
		i++;
	}
}

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
            {
                write(2,"error\n",7);
                exit(127);
            }
            j++;
        }
        i++;
    }
}

bool check_digits(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(!check_int(str[i]))
			return(false);
		i++;
	}
	return (true);
}


t_stack **args_in_list(char **str)
{
	t_stack **stack;
	t_stack *new;
	t_stack *courant;
	int		tmp;
	int		i;
	int		j;
	
	*stack = NULL;
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
		ft_lstadd_back(stack, new);
		i++;
	}
	return(stack);
}

int main(int ac, char **av)
{
    char 	*str;
    char	**splited;
    int 	i = 0;
	int 	j = 0;
	t_stack	**stack;
	t_stack	*courant;
	int 	flag;
	char 	**arg;

	
	if(ac > 1)
	{
		check_max_min(av);
		arg = joining_args(av+1);
		stack = args_in_list(arg);
		courant = *stack;
		while (courant)
		{
			printf("%d\n",courant->content);
			courant = courant->next;
		}
	}
}