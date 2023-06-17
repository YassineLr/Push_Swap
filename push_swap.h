/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:17:35 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/07 23:55:21 by ylarhris         ###   ########.fr       */
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
char	*ft_substr(char const *s, unsigned int start, size_t len);

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

//input handling
char    **joining_args(char **av);
void    args_in_list(char **str, t_all *stack);

// instructions
void    sa(t_all *stack);
void    sb(t_all *stack);
void    ss(t_all *stack);
void    pa(t_all *stack);
void    pb(t_all *stack);
void    ra(t_all *stack);
void    rb(t_all *stack);
void    rr(t_all *stack);
void    rra(t_all *stack);
void    rrb(t_all *stack);
void    rrr(t_all *stack);

// sorting
void    sort2(t_all *stack);
int	    get_min(t_stack *stack);
int     get_max(t_stack *stack);
void	compare_triplet(t_all *stack);
void    best_move(t_all *stack, int count);
void    min_to_the_top(t_all *stack, int min);
void	sort_triplet(t_all *stack);
void    sort4_5(t_all *stack);

int *filling(t_all *stack,int *tab);
int *sort_in_tab(t_all *stack);
void	push_from_a_to_b(t_all *stack, int *tab, int start, int end);

#endif