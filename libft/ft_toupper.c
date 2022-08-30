/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:58:12 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/02 11:16:49 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//converts a lower-case letter to the corresponding upper-case letter
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
