/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:07:04 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/01 20:53:39 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;
    size_t i;
    
    i = 0;
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}