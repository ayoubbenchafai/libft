/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:55:17 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/01 15:07:33 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *s;
    
    i = 0;
    s = (unsigned char *)b;
    while(i < len)
    {
        s[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

//unsigned char Le type char non signé est capable de stocker des 
//valeurs de 0 à 255, car il occupe un seul octet de mémoire.