/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:55:27 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/03 13:03:01 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//contiguously allocates enough space memory block,
//the allocated memory is filled with bytes of value zero
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((count + size) < count)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
