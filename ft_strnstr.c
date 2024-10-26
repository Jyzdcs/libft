/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:06:33 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/26 16:06:33 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (sub[j] == str[i])
		{
			i++;
			j++;
		}
		if (sub[j] == '\0')
			return ((char *)(str + (i - j)));
		i++;
	}
	return ((char *)(str));
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	const char *s1 = "Bardock est semblable";
	const char *s2 = "rdock es";
	char *result = ft_strnstr(s1, s2, 9);
	printf("%s", result);
}*/