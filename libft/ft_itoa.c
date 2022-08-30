/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:59:27 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 13:38:28 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

/*Returns a string representing the integer value received as argument.
Negative numbers have to be managed.
Returns NULL if memory allocation fails.*/
char	*ft_itoa(int n)
{
	char		*str_itoa;
	int			len;
	long long	num;

	num = (long long)n;
	len = ft_len(n);
	str_itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_itoa)
		return (0);
	if (num < 0)
	{
		str_itoa[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str_itoa[0] = '0';
	str_itoa[len] = '\0';
	while (num)
	{
		str_itoa[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str_itoa);
}
