/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:41:51 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 21:12:34 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*temp;
	
	if (s1 && s2)
	{
		result = (char *)malloc(sizeof(char)*(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (result == NULL)
			return (NULL);
		temp = result;
		while (*s1 != '\0')
			*result++ = *s1++;
		while (*s2 != '\0')
			*result++ = *s2++;
		*result = '\0';
		result = temp;
		return (result);
	}
	return (NULL);
}
/*
line 25: // Save the starting address of the result
line 31: // Reset the result pointer to the start of the string
*/