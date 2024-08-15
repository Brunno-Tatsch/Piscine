/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:01:00 by togomes-          #+#    #+#             */
/*   Updated: 2024/08/04 18:23:47 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	desenho_linhas(int x, char CantoA, char B, char CantoC)
{
	int	n;

	n = 1;
	ft_putchar(CantoA);
	while (n < x - 1)
	{
		ft_putchar(B);
		n++;
	}
	if (x > 1)
	{
		ft_putchar(CantoC);
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}

void	rush00(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
		ft_putchar('X');
	else
	{
		desenho_linhas(x, y, 'o', '-');
		while (i < y - 1)
		{
			desenho_linhas(x, y, '|', ' ');
			i++;
		}
		if (y > 1)
		{
			desenho_linhas(x, y, 'o', '-');
		}
	}
}
