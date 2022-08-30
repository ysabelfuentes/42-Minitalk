/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:03:56 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/04 12:08:40 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the first occurrence needle in haystack. 
where not more than len characters are searched.  
Characters that appear after a `\0' character are not searched
Return a pointer to the first character of the first occurrence of needle*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j < len))
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (0);
}
