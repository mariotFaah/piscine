/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 09:29:46 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/26 10:40:16 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	lnb;
	char	tmp;

	lnb = nb;
	if (lnb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (lnb < 0)
	{
		ft_putchar('-');
		lnb *= -1;
	}
	if (lnb >= 0 && lnb <= 9)
	{
		tmp = (char)lnb + '0';
		ft_putchar(tmp);
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
		ft_putnbr(lnb % 10);
	}
}
