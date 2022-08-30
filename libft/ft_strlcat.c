/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:04:31 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:15:52 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*appends string src to the end of dst.  
It will append at most dstsize - strlen(dst) - 1 characters
Return the total length of the string they tried to create*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;
	size_t	size_src;

	j = 0;
	i = ft_strlen(dst);
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize == 0 || dstsize <= size_dst)
		return (size_src + dstsize);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dst + size_src);
}
