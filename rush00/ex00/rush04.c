/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:24:27 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/15 09:43:42 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int ln, int cl)
{
	char	screen[ln][cl];
	int 	i;
	int		j;
	char	show;
	
	i = 0;	
	while (i < ln)
	{
		j = 0;
		while (j < cl)
		{
			if (i == 0 || j == 0 || i == ln - 1 || j == cl-1)
			{
				screen[i][j] = 'B';
			}
			else
			{
				screen[i][j] = ' ';
			}
			show = screen[i][j];
			j++;
		}
		i++;
	}
	screen[0][0] = 'A';
	if (cl > 1)
	{
    	screen[0][cl-1] = 'C';
	}
    if (ln > 1)
	{
		screen[ln-1][0] = 'A';
	}
	if (ln > 1 && cl > 1)
	{
    	screen[ln-1][cl-1] = 'C';	
	}
	i = 0;
	while (i < ln)
	{
		j = 0;
		while (j < cl)
		{

			show = screen[i][j];
			ft_putchar(show);
			j++;
		}
		ft_putchar('\n');
		i++;
	}

}

int		main(void)
{

	rush(5, 3);
ft_putchar('\n');
	rush(5, 1);
ft_putchar('\n');
	rush(1,1);
ft_putchar('\n');
	rush(1, 5);
ft_putchar('\n');
	rush(4,4);
	return (0);
}
