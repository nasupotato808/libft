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


/*
     The strlcat() function appends the NUL-terminated string src to the end of dst.  It will
     append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
	 Return:
	 For strlcat() that means the
     initial length of dst plus the length of src.

	ft_strlen(&src[d]) is used is that it calculates 
	the length of the remaining part of src that has not been copied to dst	 
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] != '\0' && (dstlen + i) < (dstsize - 1) )
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}