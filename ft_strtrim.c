/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:03:00 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/17 11:45:01 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s == set[i])
			return (0);
		i++;
	}
	return (1);
}

static char	*dup_str(const char *s1)
{
	int		len;
	char	*copy;
	int		i;

	len = (int)ft_strlen(s1);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static char	*empty_string(void)
{
	char	*d;

	d = malloc(1);
	if (!d)
		return (NULL);
	d[0] = '\0';
	return (d);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	int		i;
	int		k;
	int		j;

	if (!s1)
		return (NULL);
	if (set[0] == '\0')
		return (dup_str(s1));
	i = 0;
	j = 0;
	while (s1[i] && !search(s1[i], set))
		i++;
	k = (int)ft_strlen(s1) - 1;
	if (i > k)
		return (empty_string());
	while (k >= i && !search(s1[k], set))
		k--;
	d = malloc(k - i + 2);
	if (!d)
		return (NULL);
	while (i <= k)
		d[j++] = s1[i++];
	d[j] = '\0';
	return (d);
}

/**
#include <stdio.h>

int	main(void)
{
	char  s1[]="clllllllllllllllllc";
	char  s[] = "c";
	char  *c;
	c = ft_strtrim(s1, s);
	int	i=0;
	while(c[i] != '\0')
	{
		printf("%c",c[i]);
		i++;
	}
}*/
