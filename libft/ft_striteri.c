/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:25:10 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/03 13:05:00 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*To each character of the string s, apply the function f giving as parameters 
the index of each character within 's' and the address of the character itself, 
which can be modified if necessary.Does not return anything*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i++, &*s);
			s++;
		}
	}
}
