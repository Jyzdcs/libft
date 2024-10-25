/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:57:30 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/24 12:57:30 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;
	int	i;

	i = 0;
	nbr = 0;
	sign = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (sign < 0)
		return (nbr * sign);
	return (nbr);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int nbr = ft_atoi(argv[1]);
	printf("%d\n", nbr);
}*/