/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:39:21 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/07 10:50:32 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int number_digits(int n)
{
    int len;
    len = 0;
    if(n == 0)
        len++;
    if(n < 0)
      len++;    
    while(n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}
// char *check_min(int n)
// {
    
//     const char *str="-2147483648";
//     if(n == -2147483648)
//     {
//        char *ptr;
//        ptr = (char*)malloc(12);
//        if(ptr == NULL)
//          return NULL;
//        int i =0;
//        while(*str)
//        {
//         ptr[i]  = *str;
//         i++;
//         str++;
//        } 
//        ptr[i] = '\0';
//        return (ptr);
//     }
// }

char *ft_itoa(int n)
{
    char *ptr;
    int size = number_digits(n);
    ptr = (char*)malloc(size  +  1);
    
    if(ptr == NULL)
      return (NULL);
    if(n == 0)
    {
        ptr[0] = '0';
        ptr[1] = '\0';
        return (ptr);
    }
    // if(n == 0)
    //   return ft_strdup("0");
    if(n < 0)
        ptr[0] = '-';
        
    ptr[size] ='\0';
    // while(n != 0)
    // {
    //     size--;
    //     ptr[size] = (n%10 * ((n >= 0) - (n < 0))) + '0';
    //     n /= 10;
    // }
    while(n != 0)
    {
        size--;
        if(n < 0)
        ptr[size] = (n%10 * (-1)) + '0';
        else 
           ptr[size] = (n%10) + '0';
        n /= 10;
    }
    return (ptr);    
}