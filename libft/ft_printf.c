/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:11:57 by yfuentes          #+#    #+#             */
/*   Updated: 2022/08/10 16:08:35 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_initialise_pf(t_printf *pf)
{
	pf->len_print = 0;
	pf->type = '0';
}

int	ft_eval_format(const char *format, t_printf *pf, int i)
{
	pf->type = format[i];
	if (pf->type == 'c')
		ft_printf_char(pf);
	else if (pf->type == 's')
		ft_printf_string(pf);
	else if (pf->type == 'p')
		ft_printf_pointer(pf);
	else if ((pf->type == 'd') || (format[i] == 'i'))
		ft_printf_integer(pf);
	else if (pf->type == 'u')
		ft_printf_unsigned(pf);
	else if ((pf->type == 'x') || (format[i] == 'X'))
		ft_printf_hex(pf);
	else if (pf->type == '%')
		ft_printf_percent(pf);
	i++;
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			result;
	t_printf	*pf;

	pf = (t_printf *)malloc(sizeof(t_printf));
	if (!pf)
		return (-1);
	ft_initialise_pf(pf);
	va_start(pf->args, format);
	i = 0;
	result = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			i = ft_eval_format(format, pf, i + 1);
		else
		{
			pf->len_print += write(1, &format[i], 1);
			i++;
		}
	}
	result += pf->len_print;
	va_end(pf->args);
	free(pf);
	return (result);
}
