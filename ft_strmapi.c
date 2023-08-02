/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:33:37 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 21:34:27 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     i;
    char    *space_c;

    i = 0;
    if (s == NULL || *f == NULL)
        return (NULL);
    space_c = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (space_c == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        space_c[i] = (*f)(i, s[i]);
        i++;
    }
    space_c[i] = '\0';
    return (space_c);
}
