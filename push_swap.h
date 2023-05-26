#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_stack
{
    int *stack_a;
    int *stack_b;
    int stack_a_size;
    int stack_b_size;
} t_stack;

char	**ft_split(char *str, char sep);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
// char    **sotck_in_temp(char **av);
char    **joining_args(char **av);

#endif