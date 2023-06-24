/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:17:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 04:19:39 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
// #include <sys/_types.h>
#include<limits.h>
#include "./get_next_line/get_next_line.h"


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

//libft
int	    ft_atoi(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char *str, char sep);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
int		ft_strchr(char *str, char ch);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	    ft_strcmp(const char *str1, const char *str2);

//linked lists
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstdelone(t_stack *lst, void (*del)(int));
void	ft_lstclear(t_stack **lst, void (*del)(int));
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstnew(int	content);
int	    ft_lstsize(t_stack *lst);

//check args
int     check_int(const char *s);
int     check_digits(char **str);
void    ft_duplicate(char **str);
void    check_max_min(char **av);
int     is_empty(char *str);
int    ft_is_sorted(char **str);
void   print_error();

//input handling
char    **joining_args(char **av);
void    args_in_list(char **str, t_all *stack);

// instructions
void    sa(t_all *stack, int checker);
void    sb(t_all *stack, int checker);
void    ss(t_all *stack, int checker);
void    pa(t_all *stack, int checker);
void    pb(t_all *stack, int checker);
void    ra(t_all *stack, int checker);
void    rb(t_all *stack, int checker);
void    rr(t_all *stack, int checker);
void    rra(t_all *stack, int checker);
void    rrb(t_all *stack, int checker);
void    rrr(t_all *stack, int checker);

// sorting
void    sort2(t_all *stack);
int	    get_min(t_stack *stack);
int     get_max(t_stack *stack);
void	compare_triplet(t_all *stack);
void    best_move(t_all *stack, int count);
void    min_to_the_top(t_all *stack, int min);
void	sort_triplet(t_all *stack);
void    sort4_5(t_all *stack);
int     get_max_index(t_stack *stack, int max);

int *filling(t_all *stack,int *tab);
int *sort_in_tab(t_all *stack);
void	push_from_a_to_b(t_all *stack, int *tab, int start, int end);
void	push_from_b_to_a(t_all *stack);

#endif