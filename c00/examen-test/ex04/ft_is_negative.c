/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:11:02 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/12 19:03:49 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	posi;
	char	nega;

	posi = 'P';
	nega = 'N';
	if (n < 0)
	{
		write(1, &nega, 1);
	}
	else
	{
		write(1, &posi, 1);
	}
}
