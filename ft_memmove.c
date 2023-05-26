/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:22:39 by aandom            #+#    #+#             */
/*   Updated: 2022/12/28 12:16:09 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*strd;
	unsigned char	*strs;
	size_t			i;

	strs = (unsigned char *) src;
	strd = (unsigned char *) dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (strd > strs)
	{
		while (n-- > 0)
			strd[n] = strs[n];
	}
	else
	{
		while (i < n)
		{
			strd[i] = strs[i];
			i++;
		}
	}
	return (dest);
}
