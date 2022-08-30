/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:18:24 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:33:40 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Checks if the given integer c is either ' ', '\t', '\n', '\r', '\v' or '\f' 
ASCII code considered as spaces*/
static int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

//converts the string pointed to by str to int representation
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	i = ft_isspace((char *)str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	result *= sign;
	if (sign > 0 && result < 0)
		return (-1);
	if (sign < 0 && result > 0)
		return (0);
	return (result);
}
