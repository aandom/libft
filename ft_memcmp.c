/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:50:11 by aandom            #+#    #+#             */
/*   Updated: 2022/12/20 10:50:11 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while ((*s1 == *s2) && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
