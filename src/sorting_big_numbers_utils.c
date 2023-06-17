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