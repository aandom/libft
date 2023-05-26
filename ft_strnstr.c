/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:28:45 by aandom            #+#    #+#             */
/*   Updated: 2022/12/28 13:27:19 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	size_t	i;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	c = 0;
	i = 0;
	while (1)
	{
		if (little[i] == '\0')
			return ((char *) big + (c - i));
		if (little[i] == big[c])
			i++;
		else
		{
			c = c - i;
			i = 0;
		}
		if (big[c] == '\0' || c >= len)
			return (NULL);
		c++;
	}
}
