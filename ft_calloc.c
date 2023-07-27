/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:59:01 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 22:17:21 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*new;

	new = malloc(count * size);
	while (*new != '\0')
	{
		*new++ = 0;
	}
	return (new);
}
/*
{
	size_t	*new;

	new = malloc(count * size);
	while (*new != '\0')
	{
		*new++ = 0;
	}
	return (new);
}
*/
