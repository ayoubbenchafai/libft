/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:30:00 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/04 13:00:53 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int len;
    size_t i;
    unsigned char *s;
    unsigned char *d;

    i = 0;
    len = n - 1;
    s = (unsigned char*)src;
    d = (unsigned char*)dest;
    if (d > s)
    {
        while(len >= 0)
        {
            d[len] = s[len];
            len--;
        }
    }
    else if(d < s)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
