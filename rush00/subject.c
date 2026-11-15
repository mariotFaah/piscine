/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:14:57 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/14 12:21:50 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	int		i;
	char	c;

	i = 1;
	c = 'a';
	while (c <= 'z')
	{
		printf("%d-> %c -- %d\n", i, c, i%5);
		c++;
		i++;
	}
	return 0;
}
