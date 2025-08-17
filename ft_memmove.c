/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:59:14 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 14:14:24 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!to && !from)
		return (0);
	s = (unsigned char *)from;
	d = (unsigned char *)to;
	if (d > s)
	{
		while (numBytes--)
		{
			*(d + numBytes) = *(s + numBytes);
		}
		return (d);
	}
	else
	{
		return (ft_memcpy(to, from, numBytes));
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char s[8]="ABCD";
	char *g=NULL;
	memmove(g,s,2);
	printf("%s",s);

	return (0);
}*/
