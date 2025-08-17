/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:22:09 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 12:20:59 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*pp;
	char	c1;

	pp = (char *)s;
	c1 = (char)c;
	j = ft_strlen(pp);
	if (!s)
		return (0);
	if (!c)
		return (&pp[j]);
	while (j >= 0)
	{
		if (pp[j] == c1)
			return (&pp[j]);
		j--;
	}
	return (NULL);
}
/*
int main ()
{
	char x[]="helleo";
	char y='l';
	printf("%s",ft_strrchr(x, y));
}*/
