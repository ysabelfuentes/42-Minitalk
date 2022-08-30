/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:15:02 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/21 11:14:16 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a substring of the string 's'.
It starts from the 'start' index and has a maximum length of 'len'.
Returns NULL if memory allocation fails.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_tmp;
	size_t	i;

	if (!s)
		return (0);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (len == 0 || ft_strlen(s) < start)
		return (ft_strdup(""));
	str_tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!str_tmp)
		return (0);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		str_tmp[i] = s[start];
		i++;
		start++;
	}
	str_tmp[i] = '\0';
	return (str_tmp);
}
