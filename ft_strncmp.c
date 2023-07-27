/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:59:55 by jiawong           #+#    #+#             */
/*   Updated: 2023/06/28 17:52:09 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char   *c1;
    unsigned char   *c2;

    c1 = (unsigned char *)s1;
    c2 = (unsigned char *)s2;

	while (n > 0)
    {
        if (*c1 != *c2)
            return (*c1 - *c2);
        n--;
        c1++;
        c2++;
    }
    return (0);
}
