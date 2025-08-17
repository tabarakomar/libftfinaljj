/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:15:24 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 15:51:33 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t;
	const unsigned char	*u;
	size_t				i;

	i = 0;
	u = (const unsigned char *)s2;
	t = (const unsigned char *)s1;
	while (i < n)
	{
		if (u[i] != t[i])
			return (t[i] - u[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char o[]="helzo";
	char t[]="heldsf";
	int x = memcmp(o,t,4);
	printf("%d",x);
}*/
