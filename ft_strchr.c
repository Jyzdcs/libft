/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:09:37 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/26 14:09:37 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s != NULL)
	{
		if (*s == c)
			return ((char *)(s));
		s++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	const char *s = "SALUT BARDOCK";
	char *w = ft_strchr(s, 'B');
	printf("%s\n", w);
}*/