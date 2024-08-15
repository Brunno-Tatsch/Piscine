/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:36:59 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/11 15:44:51 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	comp;

	count = 0;
	while (count < size)
	{
		comp = 0;
		while (comp < size - 1)
		{
			if (tab[comp] > tab[comp +1])
				swap(&tab[comp], &tab[comp +1]);
			comp++;
		}
		count++;
	}
}
/*
int	main(void)
{
	int	tab[] = {2, 1, 3, 14, 5, 96, 7, 8, 9};
	int	size = 9;
	int	i;

	i = 0;
	ft_sort_int_tab(tab, size);
	size = i;
	while (size < 9)
	{
		printf("%d\n", tab[size]);
		size++;
	}
	return (0);
}*/
