/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 16:06:58 by aandom            #+#    #+#             */
/*   Updated: 2022/12/28 14:39:59 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	rsize;
	char	*src1;
	char	*d;

	d = dest;
	src1 = (char *)src;
	rsize = size;
	while (rsize-- != 0 && *d != '\0')
		d++;
	destlen = d - dest;
	rsize = size - destlen;
	if (rsize == 0)
		return (destlen + ft_strlen(src));
	while (*src1 != '\0')
	{
		if (rsize > 1)
		{
			*d++ = *src1;
			rsize--;
		}
		src1++;
	}
	*d = '\0';
	return (destlen + (src1 - src));
}
