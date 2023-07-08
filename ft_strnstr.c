/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:03:54 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 20:05:43 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;
	size_t	haystacklen;
	size_t	i;

	needlelen = ft_strlen(needle);
	haystacklen = ft_strlen(haystack);
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0 || needlelen > len || needlelen > haystacklen)
		return (NULL);
	while (i++ < len && *needle != '\0' && *haystack != '\0')
	{
		if (*(char *)needle++ != *(char *)haystack++)
		{
			return ((char *)haystack - i);
		}
	}
	if (i != 0 && *(char *)needle == '\0')
		return ((char *)haystack - i);
	return (NULL);
}
