/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:19:58 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 18:15:14 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*j;
	unsigned char	cc;
	size_t			y;

	y = 0;
	cc = (unsigned char)c;
	j = (unsigned char *)s;
	while (y < n)
	{
		if (j[y] == cc)
			return (j + y);
		y++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char s[] = "Aticleworld";
// 	//memchr(s,'c',5);
// 	char *p = ft_memchr(s,99,5);
// 	printf("%s",p);
// }
