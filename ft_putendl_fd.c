/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:37:17 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 21:37:47 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return ;
    if (fd > 0 && s != NULL)
    {
        write(fd, s, ft_strlen(s));
        write(fd, "\n", 1);
    }
}