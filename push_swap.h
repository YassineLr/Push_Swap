#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_args
{
    int        arg;
    struct s_args   *next;
}t_args;


int	    ft_atoi(const char *s);
t_args	*ft_lstnew(int arg);
bool    check_int(const char *s);
char    **ft_split(char *str, char sep);
size_t  ft_strlen(const char *str);
char    *ft_strjoin(char const *s1, char const *s2);
// char    **sotck_in_temp(char **av);
char    **joining_args(char **av);
void    ft_lstadd_back(t_args **lst, t_args *new);
t_args  **args_to_list(char **str);

#endif