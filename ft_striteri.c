/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:48:55 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/17 11:47:13 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	ff(unsigned int n, char *d)
{
	size_t	c;
	size_t	i;
	int		i;
	int		c;

	(void)n;
	*d = 'u';
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	c;

	if (!s || !f)
		return ;
	i = 0;
	c = ft_strlen(s);
	while (i < c)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char d[] = "abcd";
	printf("%s\n", d);
	ft_striteri(d, f);
	printf("%s\n", d);
}*/
