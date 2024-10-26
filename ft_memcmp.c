/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:51:33 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/25 23:51:33 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*el_s1;
	const unsigned char	*el_s2;

	el_s1 = s1;
	el_s2 = s2;
	while (*el_s1 == *el_s2 && n)
	{
		el_s1++;
		el_s2++;
		n--;
	}
	return (*el_s1 - *el_s2);
}
/*
** 
** #include <stdlib.h>
** #include <string.h>
** #include <stdio.h>
** 
** int	main(int ac, char **av)
** {
** 	(void)ac;
** 	char *s1 = "BILawddwdwfe";
** 	char *s2 = "BILYeDefsd";
** 	printf("%d\n", ft_memcmp(s1, s2, 7));
** }
*/