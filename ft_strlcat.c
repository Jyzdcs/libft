/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kclaudan <kclaudan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:38:12 by kclaudan          #+#    #+#             */
/*   Updated: 2024/10/24 14:38:12 by kclaudan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dest);
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] && (i < size - len_dst - 1))
	{
		dest[i + len_dst] = src[i];
		i++;
	}
	dest[i + len_dst] = '\0';
	return (len_dst + len_src);
}
/*#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char dest[8] = "Lucas";
        char src[5] = "Malik";
        printf("%u\n", ft_strlcat(dest, src,  4));
        printf("%zu\n", strlcat(dest, src,  4));
}*/