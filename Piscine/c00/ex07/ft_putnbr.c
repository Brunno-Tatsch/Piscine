/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:24:03 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/08 18:53:50 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	ft_putchar(nb / 10 + '0');
	ft_putchar(nb % 10 + '0');
}

/*
int	main(void)
{
	ft_putnbr (42);
	return (0);
}
*/
