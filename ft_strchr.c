/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:08:58 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/04 16:12:01 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  int j;
  char *ptr;
  
  ptr = (char *)s; 
  j = 0;
  while (ptr[j] != '\0')
  {
    if(ptr[j] == (unsigned char)c)
       return ((char *)(ptr + j));
    j++;   
  }
  return (NULL);
}