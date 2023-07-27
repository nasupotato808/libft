/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiawong <jiawong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:24:38 by jiawong           #+#    #+#             */
/*   Updated: 2023/07/07 21:25:16 by jiawong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
    int i, n, j;
    char *tmp;
    char *dup = NULL;
    char **arr = NULL;

    if (!s)
        return NULL;

    dup = ft_strdup(s);
    if (!dup)
        return NULL;

    /* Compute the array size */
    n = 1;
    tmp = dup;
    while (*tmp != '\0')
    {
        if (*tmp == c)
            n++;
        tmp++;
    }
    arr = (char **)malloc(sizeof(char *) * (n + 1)); // +1 to leave space for NULL terminating pointer
    if (!arr)
    {
        free(dup);
        return (NULL);
    }

    /* Set array elements to point inside the dup'ed string */
    tmp = dup;
    i = 0;
    while (*tmp != '\0')
    {
        // Skip leading delimiters
        while (*tmp == c)
            tmp++;

        j = 0;
        while (tmp[j] != c && tmp[j] != '\0')
            j++;

        arr[i] = (char *)malloc(sizeof(char) * (j + 1)); // +1 for null terminator
        if (!arr[i])
        {
            // If memory allocation fails, free previously allocated memory and return NULL
            while (i > 0)
                free(arr[--i]);
            free(arr);
            free(dup);
            return (NULL);
        }

        ft_strlcpy(arr[i], tmp, j + 1); // Copy the substring to the array element
        tmp += j; // Move to the next substring
        i++;
    }

    arr[i] = NULL; // Set the last element of the array to NULL

    free(dup); // Free the duplicate string, as we don't need it anymore

    return arr;
}