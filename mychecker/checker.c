/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 04:13:19 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:52:02 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int stack_is_sorted(t_all *stack)
{
    t_stack     *to_compare;
    t_stack     *to_compare_with;
    

    if(stack->a)
    {
        to_compare = stack->a;
        while (to_compare->next)
        {
            to_compare_with = to_compare->next;
            while (to_compare_with)
            {
                if(to_compare->content > to_compare_with->content)
                    return(0);
                to_compare_with = to_compare_with->next;
            }
            to_compare = to_compare->next;
        }
        return(1);
    }
    return (0);
}

void to_do(t_all *stack, char *inst)
{
    if (!ft_strcmp(inst,"pa\n"))
        pa(stack, 0);
    else if (!ft_strcmp(inst,"pb\n"))
        pb(stack, 0);
    else if (!ft_strcmp(inst,"ra\n"))
        ra(stack, 0);
    else if (!ft_strcmp(inst,"rb\n"))
        rb(stack, 0);
    else if (!ft_strcmp(inst,"rra\n"))
        rra(stack, 0);
    else if (!ft_strcmp(inst,"rrb\n"))
        rrb(stack, 0);
    else if (!ft_strcmp(inst,"rr\n"))
        rr(stack, 0);
    else if (!ft_strcmp(inst,"rrr\n"))
        rrr(stack, 0);
    else if (!ft_strcmp(inst,"sa\n"))
        sa(stack, 0);
    else if (!ft_strcmp(inst,"sb\n"))
        sb(stack, 0);
    else if (!ft_strcmp(inst,"ss\n"))
        ss(stack, 0);
    else
        print_error();
}
int main(int ac, char **av)
{
	t_all	*stack;
	char 	**arg;
	char 	*line;

	if(ac > 1)
	{
		stack = (t_all*)malloc(sizeof(t_all));
		arg = joining_args(av+1);
		args_in_list(arg, stack);
		while (1)
        {
            line = get_next_line(0);
            if(!line || !ft_strcmp(line, "\n"))
                break;
            to_do(stack, line);
        }
        if(stack_is_sorted(stack) )
            write(1,"OK\n",3);
        else
            write(1, "KO\n", 3);
	}
}