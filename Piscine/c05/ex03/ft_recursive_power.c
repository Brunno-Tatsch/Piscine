/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:16:53 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/18 19:34:18 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = i * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(2, 9));
	return (0);
}*/
