/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:14:24 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:43:25 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a new string, formed by the concatenation of 's1' and 's2'.
Returns NULL if memory allocation fails.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length_s1;
	int		length_s2;

	if (!s1 || !s2)
		return (0);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	str = (char *)malloc(((length_s1 + length_s2) + 1) * (sizeof(char)));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, length_s1 + 1);
	ft_strlcat(str, s2, (length_s1 + length_s2) + 1);
	return (str);
}
