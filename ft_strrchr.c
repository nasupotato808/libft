/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:06:14 by jiawong           #+#    #+#             */
/*   Updated: 2023/06/28 17:52:22 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Find the last occurrence of c in s*/
char	*ft_strrchr(const char *s, int c)
{
	const char		*found;
	const char		*p;
	unsigned char	ch;

	ch = (unsigned char)c;
	found = NULL;

	if (ch == '\0')
		return (ft_strchr(s, '\0'));

	while ((p = ft_strchr(s,c)) != NULL)
	{
		found = p;
		s = p + 1;
	}
	return ((char *)found);
}
