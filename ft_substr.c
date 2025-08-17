/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:34:13 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/17 11:04:32 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	slen;

	slen = ft_strlen(s);
	i = start;
	j = 0;
	if (start >= slen)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > slen - start)
		len = slen - start;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (j < len && s[i] != '\0')
		p[j++] = s[i++];
	p[j] = '\0';
	return (p);
}
/*
int	main(void)
{
	char h[]="hello";
	int t= 2;
	int l=3;
	char *p=ft_substr(h, t,l);
	printf("%s",p);
}*/
