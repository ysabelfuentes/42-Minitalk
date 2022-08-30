/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:02:11 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:22:01 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Lexicographically compare the null-terminated strings s1 and s2.
Compares not more than n characters.
Characters that appear after a `\0' character are not compared*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
