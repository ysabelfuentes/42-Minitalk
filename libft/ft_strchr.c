/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:41:32 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 12:04:14 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates the first instance of c in the string pointed to by s. 
returns a pointer to the located character, or null if it does not exist*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)c == s[i])
		return ((char *)s + i);
	return (0);
}
