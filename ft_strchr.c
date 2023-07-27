/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:46:52 by jiawong           #+#    #+#             */
/*   Updated: 2023/06/28 17:51:38 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*dest;
	unsigned char ch;

	ch = (unsigned char)c;
	dest = (const unsigned char *)s;
	while (*dest != '\0' && *dest != ch)
	{
		dest++;
	}
	if (*dest == ch)
	{
		return ((char *)dest);
	}
	return (NULL);
}