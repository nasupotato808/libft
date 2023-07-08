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
	char 	*sub;
	size_t	i;

	i = len - start - 1;
	sub = (char *)malloc(sizeof(char)) * i;
	if (start >= ft_strlen(s) || len >= ft_strlen(s))
		return (NULL);
	while (start-- > 0 )
		*s++;
	sub = s;
	while (i--)
	{
		*sub++ = *s++;
	}
	return (sub);
}
