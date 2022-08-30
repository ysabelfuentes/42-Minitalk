/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:35 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/21 11:03:47 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the last occurrence of c in the string pointed to by s. 
The terminating null character is considered to be part of the string.
Returns a pointer to the located character, or null if it does not exist.*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((unsigned char)c == s[i])
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (0);
}
