/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:05:44 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/07 13:20:15 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    int len_s;

    len_s = ft_strlen(s);
    while(len_s >= i)
    {
        if(s[len_s] == (unsigned char)c)
            return ((char*)(s + len_s));
        //s++;
        len_s--;    
    }  
    return NULL;
}

// int main() {
//     printf("%s\n",ft_strrchr("ayoubauj",'u'));
//     return 0;
// }