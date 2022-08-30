/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:27:11 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:55:51 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* To each character of the string s, apply the function f giving as parameters
the index of each character within s and the character itself.
Generates a new string after the correct use of f on each character.
Returns NULL if memory allocation fails.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
