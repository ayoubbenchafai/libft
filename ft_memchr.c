/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:23:35 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/01 15:08:09 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str =(unsigned char*)s;
    while(i < n)
    {
        if(str[i] == (unsigned char)c)
          return ((char*)(s + i)); 
        i++;   
    }
    return (NULL);
}