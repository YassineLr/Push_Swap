/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:35:23 by ylarhris          #+#    #+#             */
/*   Updated: 2023/06/01 22:11:36 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check(int res, char s, int sign)
{
	unsigned long long	check;

	check = res * 10;
	check = check + s - 48;
	if (check > INT_MAX && sign == 1)
		print_error();
	else if (check > ((-1) * INT_MAX - 1) && sign == -1)
		print_error();
}

int	ft_atoi(const char *s)
{
	int		res;
	int		i;
	int		sign;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] == 32 || (s[i] <= 13 && s[i] >= 9))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0')
	{
		res = res * 10;
		res = res + s[i] - 48;
		check(res, s[i], sign);
		i++;
	}
	return (sign * res);
}
