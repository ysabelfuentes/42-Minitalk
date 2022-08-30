/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:39:15 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:40:25 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it*/
char	*ft_strdup(const char *s1)
{
	void	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
