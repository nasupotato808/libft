/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:05:20 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 20:23:52 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (0);
	while (i++ < dstsize)
	{
		if (*src != '\0')
		{
			*dst++ = *src++;
		}
		else
			break ;
	}
	*dst = '\0';
	return (i);
}
