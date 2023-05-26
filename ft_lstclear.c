/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:49:01 by aandom            #+#    #+#             */
/*   Updated: 2022/12/28 15:12:47 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*m;

	if (lst && del && lst)
	{
		while (*lst)
		{
			m = (*lst)->next;
			(*del)((*lst)->content);
			free(*lst);
			*lst = m;
		}
	}
}
