/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:05:07 by yfuentes          #+#    #+#             */
/*   Updated: 2022/08/10 16:08:30 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_string(t_printf *pf)
{
	char	*str;

	str = va_arg(pf->args, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	pf->len_print += ft_strlen(str);
}
