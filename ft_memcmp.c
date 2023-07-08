/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:37:16 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 19:50:12 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t	i;

	i = 0;
	while (i++ < n)
	{
		if ((*((char *)s1) + i) != (*((char *)s2) + i))
		{
			return ((*((char *)s1) + i) - (*((char *)s2) + i));
		}
	}
	return (0);
}
