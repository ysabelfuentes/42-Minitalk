/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:54:39 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:57:57 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Send the character 'c' to the specified file descriptor.
Does not return anything */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
