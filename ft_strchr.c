/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:31:11 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/13 12:15:58 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		j;
	char	v;
	char	*pp;

	pp = (char *)s;
	v = (char)c;
	j = 0;
	while (pp[j] != '\0')
	{
		if (pp[j] == v)
		{
			return (&pp[j]);
		}
		else
		{
			j++;
		}
	}
	if (v == '\0')
		return (&pp[j]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char x[5]="hello";
	char y='l';
	printf("%s",ft_strchr(x, y));
}*/
