/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:01:32 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 20:10:04 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	n;

	n = 0;
	while (n++ < dstsize)
	{
		*dst++ = *src++;
		if (*dst++ == '\0')
			break ;
	}
	if (n < dstsize)
		return (n);
	if (n > 0)
		*(dst - 1) = '\0';
	return (n + ft_strlen(src));
}
