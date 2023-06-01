/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:15:14 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/01 17:24:17 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include<stdio.h>

char	*ft_strdup(const char *src)
{
	size_t		n;
	size_t		i;
	char		*dest;

	i = 0;
	n = ft_strlen(src) + 1;
	dest = (char *)malloc (n * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
