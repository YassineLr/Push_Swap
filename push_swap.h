/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:17:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/02 17:22:44 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/_types.h>
#include<limits.h>


typedef struct s_stack
{
    int             content;
    struct s_stack   *next;
}t_stack;

typedef struct s_all
{
    t_stack *a;
    t_stack *b;
    int     size_a;
    int     size_b;
    char    *error;
}t_all;

int	    ft_atoi(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char *str, char sep);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int     check_int(const char *s);
void    ft_duplicate(char **str);
// char    **sotck_in_temp(char **av);
char    **joining_args(char **av);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstdelone(t_stack *lst, void (*del)(int));
void	ft_lstclear(t_stack **lst, void (*del)(int));
void    args_to_list(char **str, t_all *stack);
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int	content);
int	    ft_lstsize(t_stack *lst);

// instructions

void sa(t_all *stack);

#endif