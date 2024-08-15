/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:10:03 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/11 13:11:40 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < size / 2)
	{
		temp = tab[size - 1 - count];
		tab[size - 1 - count] = tab[count];
		tab[count] = temp;
		count++;
	}
}
/*
int	main(void)
{
	int	tabm[] = {51, 72, 3, 14, 5, 96, 7, 8, 9};
	int	sizem = 9;
	int	i;

	i = 0;
	ft_rev_int_tab(tabm, sizem);
	sizem = i;
	while (sizem < 9)
	{
		printf("%d\n", tabm[sizem]);
		sizem++;
	}
	return (0);
}*/
