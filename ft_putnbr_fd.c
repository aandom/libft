/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandom <aandom@student.abudhabi42.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:16:39 by aandom            #+#    #+#             */
/*   Updated: 2022/12/26 14:16:39 by aandom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printnbr(char a, int fd)
{
	write(fd, &a, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		printnbr('-', fd);
		printnbr('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		printnbr('-', fd);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		printnbr(nb + 48, fd);
	}
}
