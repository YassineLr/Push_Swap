#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *s);
bool	check_int(const char *s);
char	**ft_split(char *str, char sep);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
// char    **sotck_in_temp(char **av);
char    **joining_args(char **av);

#endif