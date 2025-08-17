/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:13:41 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/13 11:52:54 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void) {

	// Converting 'A' to 'a'
	printf("%c", tolower('A'));
	printf("%c", ft_tolower('A'));
	return (0);
}*/
