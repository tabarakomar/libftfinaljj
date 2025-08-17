/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:32:16 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 12:10:38 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ls;
	size_t	ld;
	size_t	j;
	size_t	i;

	ld = 0;
	ls = ft_strlen(src);
	while (ld < size && dst[ld])
		ld++;
	if (ld == size)
		return (ls + size);
	j = ld;
	i = 0;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ld + ls);
}
/*
 int	main(void)
 {
	char dest[]="world ";
	char src[]="hello";
	//ft_strlcat(u, t,5);
	printf("%zu",ft_strlcat(dest, src, 20));
	printf("\n");
	printf("%s",dest);
}
*/
