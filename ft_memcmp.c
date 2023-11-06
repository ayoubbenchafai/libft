/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:46:05 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/01 15:06:40 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;
    while(i < n)
    {
        if(str1[i] != str2[i])
           return (str1[i] - str2[i]);
        i++;   
    }
    return (0);
}
//It compares the memory blocks byte by byte,