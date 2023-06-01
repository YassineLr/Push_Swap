/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:46:49 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/01 17:25:05 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include<stdio.h>


char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*j_str;

	i = 0;
	j = 0;
	if(!s1)
		return(ft_strdup(s2));
	j_str = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!j_str)
		return (NULL);
	while (s1[i])
	{
		j_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		j_str[i + j] = s2[j];
		j++;
	}
	j_str[i + j] = '\0';
	return (j_str);
}
