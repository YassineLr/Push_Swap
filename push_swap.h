#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Libft/libft.h"

typedef struct s_args
{
    int        arg;
    struct s_args   *next;
}t_args;


bool    check_int(const char *s);
// char    **sotck_in_temp(char **av);
char    **joining_args(char **av);
t_args  **args_to_list(char **str);

#endif