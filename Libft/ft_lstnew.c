/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:16:10 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/30 23:18:30 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_args	*ft_lstnew(int	content)
{
	t_args	*new;

	new = (t_args *)malloc (sizeof(t_args));
	if (!new)
		return (NULL);
	new -> arg = content;
	new -> next = NULL;
	return (new);
}
