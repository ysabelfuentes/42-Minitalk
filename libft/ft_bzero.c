/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:18:52 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:03:52 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Clear Memory. Writes n zero bytes to the string s. If n is zero, does nothing.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
