/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:36 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/31 14:06:44 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*courant;

	if (!lst)
		return (NULL);
	courant = lst;
	while (courant -> next)
		courant = courant -> next;
	return (courant);
}
