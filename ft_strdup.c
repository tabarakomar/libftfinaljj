/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:32:54 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 12:34:29 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	p = (char *)malloc(i + 1);
	if (p == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char v[]="hello world";
	char *y=ft_strdup(v);
	printf("%s",y);
	free (y);
}*/
