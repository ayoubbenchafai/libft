/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:01:14 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/04 12:21:00 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    
    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
           sign *= -1;
        i++;   
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + str[i] - '0';
        i++;
    }
    return (sign * result);    
}
// int main ()
// {
//     printf("%d\n", ft_atoi("-9223372036854775809"));
//     printf("%d", atoi("-92233720368547758099"));
// }