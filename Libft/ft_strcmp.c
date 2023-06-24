/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 01:16:53 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/24 01:23:03 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
 
int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
    if(!str1 || !str2)
        return(1);
	while ((str1[i] != '\0' || str2[i] != '\0'))
	{
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
			return (1);
		else if ((unsigned char)str1[i] < (unsigned char)str2[i])
			return (-1);
		i++;
	}
	return (0);
}