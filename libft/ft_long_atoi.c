/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:58:08 by yfuentes          #+#    #+#             */
/*   Updated: 2022/07/18 16:10:28 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_long_atoi(const char *str)
{
	int				check;
	long			value;
	unsigned int	i;
	long			n;

	check = 0;
	value = 0;
	i = 0;
	n = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (check == 1)
			return (value * n);
		if (str[i] == '-')
			n = n * -1;
		check = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		value = (value * 10) + (str[i++] - 48);
	return (value * n);
}
