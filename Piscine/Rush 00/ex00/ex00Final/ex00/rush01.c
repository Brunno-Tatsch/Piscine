/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:01:00 by togomes-          #+#    #+#             */
/*   Updated: 2024/08/04 17:54:14 by togomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	desenho_linhas(int x, char elateral, char dlateral, char meio)
{
	int	n;

	n = 1;
	ft_putchar(elateral);
	while (n < x - 1)
	{
		ft_putchar(meio);
		n++;
	}
	if (x > 1)
	{
		ft_putchar(dlateral);
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
		ft_putchar('.');
	else
	{
		desenho_linhas(x, 47, 92, 42);
		while (i < y - 1)
		{
			desenho_linhas(x, 42, 42, ' ');
			i++;
		}
		if (y > 1)
		{
			desenho_linhas(x, 92, 47, 42);
		}
	}
}
