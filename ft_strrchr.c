/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:16:38 by aandom            #+#    #+#             */
/*   Updated: 2022/12/27 00:13:45 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	int		index;

	index = (int) ft_strlen(s);
	result = (char *)(s + ft_strlen(s));
	if (c == 0)
		return (result);
	while (index >= 0)
	{
		if ((char) *result == (char) c)
			return (result);
		result--;
		index--;
	}
	return (NULL);
}
