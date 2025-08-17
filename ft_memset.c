/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:23:35 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/14 12:51:49 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t l)
{
	unsigned char	*u;

	u = (unsigned char *)str;
	while (l > 0)
	{
		*u = (unsigned char)c;
		u++;
		l--;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[5] = "hello";

//    char *str = NULL;
	ft_memset(str, 'a', 14);
	// printf("%s", ft_memset(str, 'a', 5));
	printf("%s\n", str);
}
*/