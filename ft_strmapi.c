/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:21:09 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/13 15:26:36 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	c;
	size_t	i;
	char	*u;

	u = (char *)s;
	i = 0;
	c = 0;
	c = ft_strlen(u);
	p = (char *)malloc((c + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < c && u[i])
	{
		p[i] = f(i, u[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>

char	f(unsigned int i, char c)
{
	c += i;
	return (c);
}
int	main(void)
{
	char str1[] = "abc";
	char *str2;
	str2 = ft_strmapi(str1, *f);

	printf("%s\n", str2);
}*/
