/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:05:44 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/04 11:55:39 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    int pos;

    i = 0;
    while(s[i])
    {
        if(s[i] == (unsigned char)c)
            pos = i;
        i++;
    }
    if(s[pos] == (unsigned char)c)
        return ((char*)(s + pos));
    return (NULL);
}

// int main() {
//     printf("%s\n",ft_strrchr("ayoubauj",'u'));
//     return 0;
// }