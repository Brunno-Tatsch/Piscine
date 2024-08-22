/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:51:55 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/18 19:15:54 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = i * nb;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(2, 1));
	return (0);
}*/
