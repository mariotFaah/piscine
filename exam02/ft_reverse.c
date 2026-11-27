/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 16:39:43 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/27 16:53:04 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*rev_str(char *str)
{
	int	i;
	int len;
	int	j;

	i = 0;
	j = 1;
	len = ft_strlen(str);
	while (str[i] != '\0' && i < len / 2)
	{
		ft_swap(&str[i], &str[len - j]);
		i++;
		j++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s",rev_str(argv[1]));
	}
	return (0);
}
