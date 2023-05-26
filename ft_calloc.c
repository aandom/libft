/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:00:55 by aandom            #+#    #+#             */
/*   Updated: 2022/12/21 10:00:55 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*result;
	size_t	len;

	len = nelem * elsize;
	if ((len > 2147483647) || (nelem > 2147483647) || (elsize > 2147483647))
		return (0);
	result = malloc(len);
	if (!result)
		return (0);
	ft_memset(result, 0, len);
	return (result);
}
