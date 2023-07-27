/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:25:34 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 21:31:42 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int checkdigit(long n)
{
	int i = 1;
	if ( n < 0)
	{
		n*= -1;
	}
	while ( n > 9)
	{
		n = n / 10;
		i++;
	}
	return i;
}

int power(int n1)
{
	int i = 1;
	int res = 1;
	if (n1 == 0)
		return (1);
	while (i < n1)
	{
		res *= 10;
		i++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char *arr=NULL;
	long nbr = n;
	int i = 0;
	if ( nbr < 0 )
	{
		arr = (char *)malloc(sizeof(char) * checkdigit(nbr) + 3);
		arr[i] = '-';
		nbr *= -1;
		i++;
	}
	else
		arr = (char *)malloc(sizeof(char) * checkdigit(nbr) + 2);
	while( nbr > 9)
	{
        arr[i] = ((nbr / power(checkdigit(nbr))) + '0');
		nbr = nbr % power(checkdigit(nbr));
		i++;
    }
	arr[i++] = nbr + '0';
	arr[i] = '\0';
	return (arr);
}
