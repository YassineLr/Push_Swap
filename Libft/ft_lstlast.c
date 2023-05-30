/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:36 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/30 23:15:07 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_args	*ft_lstlast(t_args *lst)
{
	t_args	*courant;

	if (!lst)
		return (NULL);
	courant = lst;
	while (courant -> next)
		courant = courant -> next;
	return (courant);
}
