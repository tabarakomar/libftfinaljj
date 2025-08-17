/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:57:26 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/13 19:20:02 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordc(char const *s, char c)
{
	int	cw;
	int	i;

	i = 0;
	cw = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			cw++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cw);
}

char	*fill(const char *s, char c)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**double_pointer(char **str, int i)
{
	while (i > 0)
		free(str[--i]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	str = (char **)malloc((wordc(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s == '\0')
			break ;
		if (*s != c)
		{
			str[i] = fill(s, c);
			if (str[i] == NULL)
				return (double_pointer(str, i));
		}
		i++;
		while (*s && *s != c)
			s++;
	}
	str[i] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char	*s = "hello dsdsdssdasda  sadsdsd  world ";
// 	char	c = ' ';
// 	int		i  = 0;
// 	char	**result;

// 	result = ft_split(s, c);
// 	if (result)
// 	{
// 		while (result[i])
// 		{
// 			printf("Word [%d]: %s\n", i, result[i]);
// 			// free(result[i]);
// 			i++;
// 		}
// 	}
// 	free(result[0]);
// 	free(result[1]);
// 	free(result[2]);
// 	free(result[3]);
// 	free(result);
// 	return (0);
// }
