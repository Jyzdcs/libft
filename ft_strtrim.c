/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:50:18 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/27 15:50:18 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Cette fonction supprime les caractères spécifiés
au début et à la fin d'une chaîne.
Elle est utile pour nettoyer une chaîne
des espaces ou caractères indésirables.
Elle alloue une nouvelle chaîne et la retourne.
C'est comme une version améliorée de trim
qui permet de spécifier les caractères à enlever.
*/
#include "libft.h"

int	is_in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_len(char const *str, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (!is_in_set(str[i], set))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	char	*tab;

	tab = malloc(sizeof(char) * ft_len(s1, set) + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		if (!is_in_set(s1[i], set))
			tab[k++] = s1[i];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char const *s1 = "dawdfa";
	char const *set = "  ";
	char *filt = ft_strtrim(s1, set);
	printf("%s\n", filt);
}
*/