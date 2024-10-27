/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:59:14 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/27 14:59:14 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * len + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len  && s[start])
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char *str = "BONJOUR TLMD JE SUIS BARDOCK !";
	char *sb = ft_substr(str, 13, 20);
	printf("%s\n", sb);
}*/