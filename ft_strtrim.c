/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:13:02 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 21:24:23 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *start;
    char    *end;
    char    *result;
    size_t  trimmedLen;
    
    start = (char *)s1;
    end = (char *)s1 + ft_strlen(s1) - 1;
    while (*start != '\0' && ft_strchr(set, *start))
        start++;
    while (end > start && ft_strchr(set, *end))
        end--;
    trimmedLen = end - start + 1;
    result = (char *)malloc(sizeof(char) * (trimmedLen + 1));
    if (!result)
        return (NULL);
    ft_strlcpy(result, start, trimmedLen + 1);
    return (result);
}