/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:42:05 by yfuentes          #+#    #+#             */
/*   Updated: 2022/08/10 16:08:28 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pointer_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_put_pointer(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_pointer(num / 16);
		ft_put_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

void	ft_printf_pointer(t_printf *pf)
{
	int					print_length;
	unsigned long long	ptr;

	print_length = 0;
	ft_putstr_fd("0x", 1);
	pf->len_print += 2;
	ptr = va_arg(pf->args, unsigned long long);
	if (ptr == 0)
	{
		ft_putchar_fd('0', 1);
		pf->len_print += 1;
	}
	else
	{
		ft_put_pointer(ptr);
		pf->len_print += ft_pointer_len(ptr);
	}
}
