/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:30:07 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 20:41:41 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	sLen;
	size_t	newLen;		

	if (s == NULL)
		return (NULL);
	sLen = ft_strlen(s);	
	if ((unsigned int)sLen < start)
		return (ft_strdup(""));
	if (sLen - start >= len)
		newLen = len;
	else
		newLen = sLen - start;
	dest = (char *)malloc(sizeof(char) * (newLen + 1));
	ft_strlcpy(dest, s + start, newLen + 1);
	return (dest);
}