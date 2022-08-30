/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:06:30 by yfuentes          #+#    #+#             */
/*   Updated: 2022/08/10 16:08:32 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

void	ft_printf_unsigned(t_printf *pf)
{
	unsigned int	num;
	char			*str_num;

	num = va_arg(pf->args, unsigned int);
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		pf->len_print += 1;
	}
	else
	{
		str_num = ft_uitoa(num);
		pf->len_print += ft_strlen(str_num);
		ft_putstr_fd(str_num, 1);
		free(str_num);
	}
}
