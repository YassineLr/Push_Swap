/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:15:28 by ylarhris          #+#    #+#             */
/*   Updated: 2023/05/30 23:14:08 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_args *lst, void (*f)(int))
{
	t_args	*courant;

	if (!lst || !f)
		return ;
	courant = lst;
	while (courant)
	{
		(*f)(courant -> arg);
		courant = courant -> next;
	}
}
