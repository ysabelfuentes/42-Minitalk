/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuentes <yfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:12:29 by yfuentes          #+#    #+#             */
/*   Updated: 2022/05/04 15:38:12 by yfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_tmp;

	if (lst || del)
	{
		while (*lst)
		{
			lst_tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = lst_tmp;
		}
		*lst = NULL;
	}
}
