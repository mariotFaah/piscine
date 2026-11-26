/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 20:22:56 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/21 20:49:20 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_screen(void);
void	ft_putchar(char c);


int	main(int argc, char	*argv[])
{
	int	i;
	
	i = 0;
	while (i < argc)
	{
		printf("\n%s\n",argv[i]);
		i++;
	}
	ft_screen();
	return (0);
}
