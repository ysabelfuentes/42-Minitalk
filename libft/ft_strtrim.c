/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:04:03 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:45:52 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Remove all characters of the string 'set' from beginning and end of 's1'
until finding a character not belonging to 'set'.
Returns the trimmed string or NULL if memory allocation fails.*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	str_trim = ft_substr(s1, 0, i + 1);
	return (str_trim);
}
