/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:57:17 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/26 16:57:17 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Cette fonction recherche la dernière occurrence d'un caractère dans une chaîne.
Elle est utile pour trouver la position finale d'un caractère spécifique.
Elle retourne un pointeur vers ce caractère ou NULL s'il n'est pas trouvé.
C'est l'équivalent de strrchr de la bibliothèque standard C.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen((char *)s);
	while (len)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
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
	(void)av;
	char *result = ft_strrchr("SALUT TLMD CA VA", 'C');
	printf("%s", result);
}*/