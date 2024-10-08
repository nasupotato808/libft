/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:54:33 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 20:18:08 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_whitespace(const char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int parse_num(const char *str, int i, int res)
{
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				break ;
		}
		i++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	n;

	i = 0;
	n = 1;
	res = 0;
	
	i += skip_whitespace(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	res = parse_num(str, i, res);
	return (res * n);
}