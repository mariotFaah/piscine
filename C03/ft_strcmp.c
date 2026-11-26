/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariotFaah <mariotFaah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 21:08:11 by mariotFaah        #+#    #+#             */
/*   Updated: 2026/11/24 22:04:24 by mariotFaah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char *s1 = "Ao ve ianao";
	int i = 0;
	while (s1[i])
	{
		printf("%c", s1[i]);
		i++;
	}

	int taille = 0;
	while (s1[taille])
	{
		taille++;
	}
	printf("\nVoici la taille de s1 = %d", taille);
	while (s1[taille])
	{
		printf("%c", s1[taille]);
		taille--;
	}
	printf("\n");
	int space = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == ' ')
			space++;
		i++;
	}
	printf("La taille des espaces est %d\n", space);

	return (0);
}
