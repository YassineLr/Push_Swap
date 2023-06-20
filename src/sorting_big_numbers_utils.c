#include "../push_swap.h" 

int  get_max(t_stack *stack)
{
    t_stack *courant;
    int     max;

    courant = stack;
    max = courant->content;
    while (courant)
    {
        if(courant->content > max)
            max = courant->content;
        courant = courant->next;
    }
    return (max);
}

int get_max_index(t_stack *stack, int max)
{
    t_stack *courant;
    int     index;

    index = 0;
    courant = stack;
    while (courant)
    {
        if (courant->content == max)
            return(index);
        index++;
        courant = courant->next;
    }
    return(-1);
}

void	push_from_b_to_a(t_all *stack)
{
	int	max_index;

    printf("from b to a:\n");

	while (stack->size_b)
	{
		max_index = get_max_index(stack->b, get_max(stack->b));
		if (max_index <= stack->size_b / 2)
			while (get_max_index(stack->b,get_max(stack->b)))
				rb(stack);
		else
			while (get_max_index(stack->b, get_max(stack->b)))
				rrb(stack);
		pa(stack);
	}
}