/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:59:54 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:17:00 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//converts an upper-case letter to the corresponding lower-case letter
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
