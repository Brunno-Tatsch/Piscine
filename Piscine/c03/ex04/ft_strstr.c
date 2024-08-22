/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bxavier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:01:15 by bxavier-          #+#    #+#             */
/*   Updated: 2024/08/21 19:47:48 by bxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*str_sub;

	str_sub = NULL;
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				str_sub = &str[i - j];
				return (str_sub);
			}
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (str_sub);
}
/*
int	main(void)
{
	char	str[] = "Uma vez Flamengo Sempre Flamengo";
	char	to_find[] = "vez";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
