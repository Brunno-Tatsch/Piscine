/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:56:34 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/08 19:10:02 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	d;
	int	m;
	int	e;

	e = 0;
	while (e <= 7)
	{
		m = e + 1;
		while (m <= 8)
		{
			d = m + 1;
			while (d <= 9)
			{
				ft_putchar(e % 10 + '0');
				ft_putchar(m % 10 + '0');
				ft_putchar(d % 10 + '0');
				if (e != 7 || m != 8 || d != 9)
					ft_putchar(',');
				d++;
			}
			m++;
		}
		e++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
