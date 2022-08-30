/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:12:33 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 10:52:24 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function tests for an ASCII character, which is any character between 0 - 127.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
