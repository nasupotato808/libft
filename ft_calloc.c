/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:59:01 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 22:17:21 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	if (count > SIZE_MAX / size || size > SIZE_MAX / count)
		return (NULL);
	new = (void c *)malloc(count * size);
	if(!new)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}