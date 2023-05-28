/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:49:19 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/28 18:25:40 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_args	*ft_lstnew(int arg)
{
	t_args	*new;

	new = (t_args *)malloc (sizeof(t_args));
	if (!new)
		return (NULL);
	new -> arg = arg;
	new -> next = NULL;
	return (new);
}