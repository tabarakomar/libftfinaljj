/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:43:02 by talshoub          #+#    #+#             */
/*   Updated: 2025/08/16 12:35:44 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nn;

	nn = (t_list *)malloc(sizeof(t_list));
	if (!nn)
		return (NULL);
	nn->content = content;
	nn->next = NULL;
	return (nn);
}
