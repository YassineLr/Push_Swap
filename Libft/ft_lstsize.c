/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:17:01 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/30 23:17:46 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

int	ft_lstsize(t_args *lst)
{
	t_args	*courant;
	int		size;

	size = 0;
	courant = lst;
	while (courant)
	{
		courant = courant -> next;
		size++;
	}
	return (size);
}
